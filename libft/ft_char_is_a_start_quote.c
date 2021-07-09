/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_is_a_start_quote.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:49:38 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/22 12:24:56 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_INITIALIZE_VARIABLES_AT_ZERO
** As its name suggests, this functions takes 4 argument pointers to int
** and sets all their values to 0
*/

static void	ft_initialize_variables_at_zero(int *a, int *b, int *c, int *d)
{
	*a = 0;
	*b = 0;
	*c = 0;
	*d = 0;
}

/*
** FT_ADD_QUOTES_AND_LOCK
** This function will increment *count argument and if the count isn't
** even, will lock the status of "inside" argument to 1,
** (or 0 otherwise)
** The locked status allows us not to count ' and " characters while
** inside the other quotes
*/

static void	ft_add_quote_and_lock(int *count, int *inside)
{
	*count += 1;
	if (*count % 2)
		*inside = 1;
	else
		*inside = 0;
}

/*
** FT_RETURN
** This function is used to return the needed value in 
** ft_str_has_unclosed_quotes function.
** Returns "\'" if there are unclosed single quotes,
** Returns "\"" if there are unclosed double quotes,
** Returns "\0" if all quotes are closed
*/

static char	ft_return(int inside_single_quotes, int inside_double_quotes,
						char *str, int i)
{
	if (((str[i] == '\'' && i && str[i - 1] != '\\') || (str[i] == '\'' && !i))
		&& !inside_double_quotes)
		return ('\'');
	else if (str[i] == '\'' && inside_single_quotes)
		return ('\'');
	else if (((str[i] == '\"' && i && str[i - 1] != '\\')
			|| (str[i] == '\"' && !i))
		&& !inside_single_quotes)
		return ('\"');
	else
		return (0);
}

/*
** FT_CHAR_IS_A_START_QUOTE
** This function will check if str[i] is a quote char and is a valid start
** of the quotes
** Returns the valid quote found or 0 if the character is not a quote
*/

char	ft_char_is_a_start_quote(char *s, int j)
{
	int	i;
	int	count_simple_quotes;
	int	count_double_quotes;
	int	inside_simple_quotes;
	int	inside_double_quotes;

	if (!s)
		return (-1);
	i = -1;
	ft_initialize_variables_at_zero(&count_simple_quotes, &count_double_quotes,
		&inside_simple_quotes, &inside_double_quotes);
	while (s[++i] && i < j)
	{
		if (((s[i] == '\'' && i && s[i - 1] != '\\') || (s[i] == '\'' && !i)
				|| (s[i] == '\'' && inside_simple_quotes))
			&& !inside_double_quotes)
			ft_add_quote_and_lock(&count_simple_quotes, &inside_simple_quotes);
		if (((s[i] == '\"' && i && s[i - 1] != '\\') || (s[i] == '\"' && !i))
			&& !inside_simple_quotes)
			ft_add_quote_and_lock(&count_double_quotes, &inside_double_quotes);
	}
	if (i == j)
		return (ft_return(inside_simple_quotes, inside_double_quotes, s, j));
	return (0);
}
