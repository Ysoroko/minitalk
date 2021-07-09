/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 13:42:23 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:07:55 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static void	ft_putnbr_base(unsigned int nbr, char *str, int i)
{
	unsigned int	n;

	n = nbr;
	if (n >= 10)
	{
		ft_putnbr_base(n / 10, str, i + 1);
		ft_putnbr_base(n % 10, str, i);
	}
	else
	{
		str[i] = '0' + n;
	}
}

static int	ft_count_mem(int m)
{
	int	mem_length;

	mem_length = 0;
	if (m < 0)
		mem_length++;
	else if (m == 0)
		return (1);
	while (m % 10 != 0 || m / 10 != 0)
	{
		m = m / 10;
		mem_length++;
	}
	return (mem_length);
}

static char	*rev_str(char *str, int i)
{
	int		j;
	char	temp;
	int		middle;
	int		len;

	j = 0;
	len = ft_strlen(str);
	middle = len / 2 + i;
	while (i < middle)
	{
		temp = str[i];
		str[i] = str[len - j - 1];
		str[len - j - 1] = temp;
		i++;
		j++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	m;
	int				mem_length;
	int				i;
	char			*str;

	m = n;
	i = 0;
	mem_length = ft_count_mem(n);
	str = malloc(sizeof(char) * (mem_length + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		m *= -1;
		i++;
	}
	str[mem_length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	ft_putnbr_base(m, str, i);
	return (rev_str(str, i));
}
