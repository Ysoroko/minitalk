/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_only_has_chars_from_charset.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:59:00 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/05 18:00:29 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STR_ONLY_HAS_CHARS_FROM_CHARSET
** This function returns 1 if str argument is filled with ONLY chars from
** charset argument. It will return 0 if it sees at least one character not
** belonging to charset in str
*/

int	ft_str_only_has_chars_from_charset(char *str, char *charset)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_strchr(charset, str[i]))
			return (0);
	}
	return (1);
}
