/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:40:35 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/22 14:52:21 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		str_len;
	char		*my_s;

	str_len = ft_strlen(s);
	my_s = (char *)(s);
	if ((char)(c) == '\0')
	{
		return (&my_s[str_len]);
	}
	while (str_len > 0)
	{
		if (my_s[str_len] == (char)(c))
		{
			return (&my_s[str_len]);
		}
		str_len--;
	}
	if (my_s[str_len] == (char)(c))
	{
		return (my_s);
	}
	return (0);
}
