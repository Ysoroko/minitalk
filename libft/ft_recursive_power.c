/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:08:48 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/12 11:12:03 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** int	ft_recursive_power(int nb, int power)
** This function returns the result of nb ^ power
** Example: ft_recursive_power(2, 3) = 2 ^ 3 = 8
*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
