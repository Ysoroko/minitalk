/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_until_c_from_charset.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:32:57 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/05 18:03:20 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRCPY_UNTIL_C_FROM_CHARSET
** Same as strcpy, but will stop copying if a character from "set" argument
** is seen 
** This character seen is included in the copy (useful for minishell)
*/

char	*ft_strcpy_until_c_from_charset(char *dest, const char *src, char *set)
{
	int		i;
	char	*my_src;

	my_src = (char *)(src);
	i = 0;
	while (my_src[i] && !ft_strchr(set, my_src[i]))
	{
		dest[i] = my_src[i];
		i++;
	}
	if (ft_strchr(set, my_src[i]))
	{
		dest[i] = my_src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
