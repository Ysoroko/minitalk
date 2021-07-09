/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:37:38 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/22 14:47:20 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*my_str;

	i = 0;
	my_str = (unsigned char *)(str);
	while (i < n)
	{
		my_str[i] = '\0';
		i++;
	}
}
