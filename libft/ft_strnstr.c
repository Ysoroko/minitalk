/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:39:00 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:22:15 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*my_h;
	char	*my_n;

	i = 0;
	my_h = (char *)(haystack);
	my_n = (char *)(needle);
	if (my_n[0] == '\0')
		return (my_h);
	while (my_h[i] != '\0' && i < len)
	{
		j = 0;
		while (my_n[j] == my_h[i + j] && my_h[i + j] && my_n[j] && i + j < len)
		{
			j++;
		}
		if (my_n[j] == '\0')
		{
			return (&my_h[i]);
		}
		i++;
	}
	return (0);
}
