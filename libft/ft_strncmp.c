/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:40:20 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:21:17 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*my_s1;
	char	*my_s2;

	i = 0;
	my_s1 = (char *)(s1);
	my_s2 = (char *)(s2);
	if (n > 0)
	{
		while (my_s1[i] == my_s2[i] && (my_s1[i] || my_s2[i]) && i < n - 1)
			i++;
		return ((unsigned char)(my_s1[i]) - (unsigned char)(my_s2[i]));
	}
	return (0);
}
