/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_chars_in_str_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:03:51 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:11:14 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_n_chars_in_str_tab(char **str_tab, char c)
{
	int	i;
	int	count;

	if (!str_tab)
		return (0);
	i = -1;
	count = 0;
	while (str_tab[++i])
		count += ft_n_chars_in_str(str_tab[i], c);
	return (count);
}
