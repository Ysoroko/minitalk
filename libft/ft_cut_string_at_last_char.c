/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_string_at_last_char.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:00:17 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/10 16:29:12 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_CUT_STRING_AT_LAST_CHAR
** Replaces the last occurence of char c in string str by a '\0'
*/

void	ft_cut_string_at_last_char(char *str, char c)
{
	int	i;

	if (!str)
		return ;
	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (str[i] == c)
			str[i] = 0;
	}
}
