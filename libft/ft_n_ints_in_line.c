/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_ints_in_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:48:52 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:11:32 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_N_INTS_IN_LINE
** Returns the number of separate integers represented with digits in str,
** separated by anything but a digit
*/

int	ft_n_ints_in_line(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_isdigit(str[i]))
			i++;
		if (ft_isdigit(str[i]))
			count++;
		while (str[i] && ft_isdigit(str[i]))
			i++;
	}
	return (count);
}
