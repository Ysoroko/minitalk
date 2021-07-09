/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_new_exit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:08:12 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/08 16:18:33 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_NEW_EXIT
** This function will create a new t_dl_lst (double linked list) structure,
** assign its elements to be the arguments and will return
** the newly created function
*/

t_dl_lst	*ft_dl_lst_new_exit(void *content)
{
	t_dl_lst	*ret;

	ret = malloc(sizeof(t_dl_lst));
	if (!ret)
		exit(EXIT_FAILURE);
	ret->previous = 0;
	ret->next = 0;
	ret->content = content;
	return (ret);
}
