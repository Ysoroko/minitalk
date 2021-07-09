/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:14:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/06 10:28:38 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRCHRN
** This function is a copy of strchr
** It looks for the character c inside the str argument, but returns the
** position of the character as an int (= Nth character) rather than the 
** address of the string starting at the character
** Returns -1 if the character wasn't found
*/

int	ft_strchrn(char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (i + 1);
	}
	return (-1);
}
