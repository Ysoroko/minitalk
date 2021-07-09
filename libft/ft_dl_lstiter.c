/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstiter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:39:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/10 15:03:13 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LSTITER
** It will apply function f to all of the elements
** before and after the *lst element
*/

void	ft_dl_lstiter(t_dl_lst *lst, void (*f)(void *))
{
	t_dl_lst	*temp;

	if (!lst || !f)
		return ;
	temp = ft_dl_lst_first(lst);
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
