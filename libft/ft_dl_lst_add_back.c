/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:18:16 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/08 17:54:27 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_ADD_BACK
** This function works with dll (double linked lists)
** It will add a new member at the start of a dll list
** Unlike its equivalent in linked lists, it can accept an element in the
** middle of a t_dl_lst, find its last element and add the new_member
** argument after it
** !!! This will set new_member's->next to NULL
*/

void	ft_dl_lst_add_back(t_dl_lst *add_after, t_dl_lst *new_member)
{
	t_dl_lst	*temp;

	if (!new_member || !add_after)
		return ;
	temp = ft_dl_lst_last(add_after);
	temp->next = new_member;
	new_member->next = 0;
}
