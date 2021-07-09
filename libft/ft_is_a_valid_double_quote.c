/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_valid_double_quote.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:12:54 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/05 09:16:34 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_is_a_valid_double_quote
** This function returns 1 str[i] is a valid double quote
** (not preceeded by a \) or 0 if it is not
*/

int	ft_is_a_valid_double_quote(char *str, int i)
{
	if (str[i] == '\"' && i && str[i - 1] != '\\')
		return (1);
	else if (str[i] == '\"' && !i)
		return (1);
	else
		return (0);
}
