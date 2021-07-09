/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longest_strlen_in_strtab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:17:22 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/09 14:41:19 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_longest_strlen_in_strtab(char **str_tab)
{
	int	i;
	int	max;
	int	current;

	if (!str_tab)
		return (0);
	i = -1;
	max = 0;
	while (str_tab[++i])
	{
		current = (int)ft_strlen(str_tab[i]);
		if (current > max)
			max = current;
	}
	return (max);
}
