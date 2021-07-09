/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_first_word_qx.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:33:46 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/05 14:39:40 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_QUOTED_FIRST_WORD
** This function is called when we see that the word we're trying to extrtact
** starts with a quote (simple or double). We will then ignore the separators
** and extract the word until the ending corresponding quote (or the end of
** the string)
*/

static void	ft_quoted_first_word(char **str, int *i)
{
	char	quote;

	quote = ft_char_is_a_start_quote(*str, *i);
	(*i)++;
	while ((*str)[*i] && ft_char_is_a_start_quote(*str, *i) != quote)
		(*i)++;
	if (ft_char_is_a_start_quote(*str, *i))
	{
		(*i)++;
		(*str)[*i] = 0;
	}
}

/*
** FT_EXTRACT_FIRST_WORD_QX
** Same as ft_extract_first_word, will extract either first word based on seps
** or based on quotes (and the separators will then be ignored while in quotes)
** Q stands for "quotes"
** X stands for "exit"
** Example: ft_extract_first_work_qx("\"_abc_\"", "_=.")
** will extract \"_abc_\"
*/

char	*ft_extract_first_word_qx(char *from, char *separators)
{
	int		i;
	char	*temp_copy;
	char	*ret;

	i = -1;
	temp_copy = ft_strtrim_exit(from, separators);
	if (!temp_copy || !temp_copy[0])
		return (ft_free_str(&temp_copy));
	while (temp_copy[++i])
	{
		if (ft_char_is_a_start_quote(temp_copy, i))
		{
			ft_quoted_first_word(&temp_copy, &i);
			break ;
		}
		else if (ft_strchr_not_quoted(separators, temp_copy[i]))
		{
			temp_copy[i] = 0;
			break ;
		}
	}
	ret = ft_strdup_exit(temp_copy);
	ft_free_str(&temp_copy);
	return (ret);
}
