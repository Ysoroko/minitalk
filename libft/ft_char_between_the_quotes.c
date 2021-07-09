/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_between_the_quotes.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:46:30 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/27 15:28:11 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_check_if_end_of_quote_is_reached(char *str, int i, char *quote)
{
	if (ft_char_is_a_start_quote(str, i) == *quote)
	{
		*quote = 0;
		return (1);
	}
	return (0);
}

/*
** FT_CHAR_BETWEEN_THE_QUOTES
** This function will check if the character str_containing_c[char_position]
** is included between quotes (single or double) and return
** the corresponding quote or '\0' if the character is not between the quotes
*/

char	ft_char_between_the_quotes(int c_pos, char *str)
{
	char	quote;
	int		i;

	i = 0;
	if (!str || c_pos > ft_strlen(str))
		return (0);
	while (str[i] && i <= c_pos)
	{
		quote = ft_char_is_a_start_quote(str, i);
		if (quote)
		{
			i++;
			while (str[i] && i <= c_pos)
			{
				if (ft_check_if_end_of_quote_is_reached(str, i, &quote))
					break ;
				i++;
			}
		}
		if (str[i])
			i++;
	}
	return (quote);
}
