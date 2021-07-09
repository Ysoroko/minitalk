/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:51:55 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/22 14:47:35 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	char		*my_src;
	int			dst_len;

	my_src = (char *)(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (i >= dstsize || dstsize == 0)
	{
		return (dstsize + ft_strlen(my_src));
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = my_src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(my_src));
}
