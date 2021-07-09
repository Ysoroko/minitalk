/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:34:50 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/10 12:46:51 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_LAST
** Given an element of t_dl_lst (double linked list)
** this function will find its last element and return its address
*/

t_dl_lst	*ft_dl_lst_last(t_dl_lst *first)
{
	t_dl_lst	*ret;

	if (!first)
		return (0);
	ret = first;
	while (ret->next)
		ret = ret->next;
	return (ret);
}
