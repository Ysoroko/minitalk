/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:50:53 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/12 17:42:27 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** Same as ft_strchr, but instead of looking for only one character,
** is looking for one of the characters of the charset
** Returns the address of the first occurence of one of the charset characters
** or a NULL pointer if none were found
*/

char	*ft_strchrset(char *str, char *charset)
{
	int		i;
	char	*found;

	if (!str || !charset)
		return (0);
	i = -1;
	while (str[++i])
	{
		found = ft_strchr(charset, str[i]);
		if (found)
			return (found);
	}
	return (0);
}
