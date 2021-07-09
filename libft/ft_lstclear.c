/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:43:21 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/04 17:04:27 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*last_address_of_temp;

	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	temp = *lst;
	last_address_of_temp = temp;
	while (temp != 0)
	{
		del(temp->content);
		temp = temp->next;
		free(last_address_of_temp);
		last_address_of_temp = temp;
	}
}
