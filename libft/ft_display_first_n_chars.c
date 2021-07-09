/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_first_n_chars.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:14:57 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/05 10:09:40 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_display_first_n_chars
** This function will display first n chars of the string
** it will not stop at the string's '\0'
** This is useful to double check the strings created using ft_calloc
** so that we don't accidentally skip a character and obtain a cut/empty string
*/

void	ft_display_first_n_chars(char *str, int n, int fd)
{
	int	i;

	i = 0;
	ft_putendl_fd("", fd);
	while (i < n)
	{
		if (!str[i])
			ft_putstr_fd("\\0", fd);
		ft_putchar_fd(str[i], fd);
		i++;
	}
	ft_putendl_fd("", fd);
}
