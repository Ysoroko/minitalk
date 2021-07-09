/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:39:13 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/21 10:59:12 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_FIRST
** Given an element of t_dl_lst (double linked list)
** this function will find its first element and return its address
*/

t_dl_lst	*ft_dl_lst_first(t_dl_lst *last)
{
	t_dl_lst	*ret;

	if (!last)
		return (0);
	ret = last;
	while (ret->previous)
		ret = ret->previous;
	return (ret);
}
