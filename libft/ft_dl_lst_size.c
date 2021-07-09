/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:30:31 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/08 16:34:01 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_DL_LST_SIZE
** This function will count the number of elements in a t_dl_lst (double linked
** list) structure and return the number of elements it contains
*/

int	ft_dl_lst_size(t_dl_lst *first)
{
	int			ret;
	t_dl_lst	*temp;

	ret = 0;
	temp = first;
	while (temp)
	{
		temp = temp->next;
		ret++;
	}
	return (ret);
}
