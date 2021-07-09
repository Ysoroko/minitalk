/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:48:16 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/22 14:52:03 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*my_dst;
	unsigned char	*my_src;
	unsigned char	my_c;

	my_dst = (unsigned char *)(dst);
	my_src = (unsigned char *)(src);
	my_c = (unsigned char)(c);
	i = 0;
	while (i < n)
	{
		if (my_src[i] == my_c)
		{
			my_dst[i] = my_src[i];
			return (&my_dst[i + 1]);
		}
		my_dst[i] = my_src[i];
		i++;
	}
	return (0);
}
