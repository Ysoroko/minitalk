/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:23:49 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:04:48 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	my_isspace(char c)
{
	char	tab[6];
	int		i;

	tab[0] = ' ';
	tab[1] = '\n';
	tab[2] = '\t';
	tab[3] = '\v';
	tab[4] = '\f';
	tab[5] = '\r';
	i = 0;
	while (i < 6)
	{
		if (c == tab[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_extreme(int number, unsigned long long extreme, int sign)
{
	unsigned long long	min;
	unsigned long long	max;

	min = 9223372036854775808U;
	max = 9223372036854775807U;
	if (extreme > max && sign == 1)
		return (-1);
	if (extreme > min && sign == -1)
		return (0);
	return (number * sign);
}

static int	ft_plus_or_minus(char *str, int i, int *sign)
{
	if (str[i] == '-')
	{
		*sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					number;
	unsigned long long	extreme;
	char				*my_str;

	i = 0;
	sign = 1;
	number = 0;
	extreme = 0;
	my_str = (char *)(str);
	while (my_isspace(my_str[i]))
		i++;
	i = ft_plus_or_minus(my_str, i, &sign);
	while (my_str[i] >= '0' && my_str[i] <= '9')
	{
		number = number * 10 + my_str[i] - '0';
		extreme = extreme * 10 + my_str[i] - '0';
		i++;
	}
	return (ft_extreme(number, extreme, sign));
}
