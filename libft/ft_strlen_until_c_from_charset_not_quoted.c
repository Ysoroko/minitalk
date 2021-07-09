/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_until_c_from_charset_not_quoted.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:32:45 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/21 11:02:07 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRLEN_UNTIL_C_FROM_CHARSET_NOT_QUOTED
** Same as strlen, but will stop counting if a character  from "charset"
** argument is seen. This character must not be between two quotes
** (simple or double), if it's the case, the function keeps counting until it
** sees a character from charset unquoted or we reach the end of the string
** This character seen is included in the count (useful for minishell)
*/

int	ft_strlen_until_c_from_charset_not_quoted(char *str, char *charset)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
		if (ft_strchr(charset, str[i]) && !ft_char_between_the_quotes(i, str))
			break ;
	}
	return (i);
}
