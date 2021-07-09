/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:47:31 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:10:58 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstnew_exit(void *content)
{
	t_list	*pnt;

	pnt = malloc(sizeof(t_list));
	if (!pnt)
		exit(EXIT_FAILURE);
	pnt->content = content;
	pnt->next = 0;
	return (pnt);
}
