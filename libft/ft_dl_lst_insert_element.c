/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_insert_element.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:48:35 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/08 16:58:36 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_INSERT_ELEMENT
** This function inserts the element "to_insert" in the middle of the dll
** (double linked list) and links it to the previous and next element
*/

void	ft_dl_lst_insert_element(t_dl_lst *to_insert, t_dl_lst *after_this)
{
	if (!after_this || !to_insert)
		return ;
	after_this->next = to_insert;
	to_insert->previous = after_this;
	to_insert->next = after_this->next;
	if (after_this->next)
		after_this->next->previous = to_insert;
}
