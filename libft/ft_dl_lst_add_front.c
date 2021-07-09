/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_add_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:20:09 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/08 17:22:18 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_ADD_FRONT
** This function works with dll (double linked lists)
** It will add a new member at the start of a dll list
** Unlike its equivalent in linked lists, it can accept an element in the
** middle of a t_dl_lst, find its first element and add the new_member
** argument in front
** !!! This will set new_member's->previous to NULL
*/

void	ft_dl_lst_add_front(t_dl_lst *add_before, t_dl_lst *new_member)
{
	t_dl_lst	*temp;

	if (!new_member || !add_before)
		return ;
	temp = ft_dl_lst_first(add_before);
	new_member->next = temp;
	new_member->previous = 0;
}
