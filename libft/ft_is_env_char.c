/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_env_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:33:15 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/04 14:34:44 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_is_env_name_char
** This function returns 1 if c is a valid character for an env_name
** or returns 0 if it is not
** Valid characters include letters, digits and '_' characters
*/

int	ft_is_env_name_char(char c)
{
	if (ft_isalnum(c) || c == '_')
		return (1);
	return (0);
}
