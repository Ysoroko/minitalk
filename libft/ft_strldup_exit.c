/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup_exit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:00:36 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/10 17:23:55 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRLDUP_EXIT
** Same as ft_strldup_exit, but will only copy first n_chars characters
** Returns the malloc'd result string
*/

char	*ft_strldup_exit(const char *src, int n_chars)
{
	char	*str;
	char	*my_src;

	if (!src)
		return (0);
	my_src = (char *)(src);
	str = malloc(sizeof(char) * (n_chars + 1));
	if (!str)
		exit(EXIT_FAILURE);
	ft_strlcpy(str, my_src, n_chars);
	return (str);
}
