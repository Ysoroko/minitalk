/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:39:58 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/22 14:47:33 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*my_str1;
	unsigned char	*my_str2;

	i = 0;
	my_str1 = (unsigned char *)(str1);
	my_str2 = (unsigned char *)(str2);
	while (my_str1[i] == my_str2[i] && i < n - 1)
	{
		i++;
	}
	if (i >= n)
	{
		return (0);
	}
	else
	{
		return (my_str1[i] - my_str2[i]);
	}
}
