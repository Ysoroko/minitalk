/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:16:11 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/26 17:04:48 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr_tab(char **str_tab, int fd)
{
	int	i;

	if (!str_tab)
	{
		ft_putstr_fd("(null) str_tab\n", fd);
		return ;
	}
	i = -1;
	while (str_tab[++i])
		ft_putendl_fd(str_tab[i], fd);
}
