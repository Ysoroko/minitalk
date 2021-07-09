/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_exit_and_free_src.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:44:58 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/03 13:48:30 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_return_strdup_and_free_src
** This function will use ft_strdup_exit of *src and return the result
** Will also free *src
** Is mostly used when we ft_calloc too much memory and need to free
** the parts we don't actually need and malloc the right value
*/

char	*ft_strdup_exit_and_free_src(char **src)
{
	char	*ret;

	if (!src || !*src)
		return (0);
	ret = ft_strdup_exit(*src);
	ft_free_str(src);
	return (ret);
}
