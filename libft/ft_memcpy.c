/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:38:34 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/22 14:47:37 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*my_src;
	unsigned char	*my_dest;

	if (dest == 0 && src == 0)
	{
		return (0);
	}
	my_src = (unsigned char *)(src);
	my_dest = (unsigned char *)(dest);
	if (ft_strncmp((char *)my_dest, (char *)my_src, n) == 0)
	{
		return (my_dest);
	}
	i = 0;
	while (i < n)
	{
		my_dest[i] = my_src[i];
		i++;
	}
	return (dest);
}
