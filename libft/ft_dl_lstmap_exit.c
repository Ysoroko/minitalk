/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstmap_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:47:28 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/09 09:57:39 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LSTMAP_EXIT
** Unlike its equivalent in t_list structures, any element given from t_dl_lst
** will allow this function to apply f argument function to all of the dl_lst
** list's elements, before and after the specified *l argument
*/

t_dl_lst	*ft_dl_lstmap_exit(t_dl_lst *l, void *(*f)(void *),
															void (*del)(void *))
{
	t_dl_lst	*new_list;
	t_dl_lst	*current_new;
	t_dl_lst	*current;
	t_dl_lst	*first;

	if (!l || !f || !del)
		return (0);
	first = ft_dl_lst_first(l);
	new_list = ft_dl_lst_new_exit(f(first->content));
	if (!new_list)
		exit(EXIT_FAILURE);
	current = first->next;
	current_new = new_list;
	while (current != 0)
	{
		current_new = ft_dl_lst_new_exit(f(current->content));
		if (!(current_new))
		{
			ft_dl_lstclear(new_list, del);
			exit(EXIT_FAILURE);
		}
		ft_dl_lst_add_back(new_list, current_new);
		current = current->next;
	}
	return (new_list);
}
