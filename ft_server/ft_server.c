/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:39:35 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/12 12:18:18 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static void	ft_update_the_result(int signal)
{
	static int	char_value = 0;
	static int	current_bit = 0;

	//printf("Signal received: [%d]\n", signal);
	//printf("Current bit: [%d]\n", current_bit);
	if (current_bit == 7)
	{
		//printf("char value: [%d]\n", char_value);
		if (char_value == 0)
			ft_putchar_fd('\n', 1);
		ft_putchar_fd(char_value, 1);
		current_bit = 0;
		char_value = 0;
	}
	else
	{
		if (signal == SIGUSR2)
			char_value += ft_recursive_power(2, current_bit);
		current_bit++;
	}
}

static void	ft_test(int sig)
{
	//if (sig == SIGUSR1)
	//{
	//	ft_putnbr_fd(0, 1);
	//}
	//else
	//	ft_putnbr_fd(1, 1);
	ft_update_the_result(sig);
}

/*
** SIGUSR1 = 30
** SIGUSR2 = 31
*/

int	main(void)
{
	int	id;

	id = (int)(getpid());
	ft_putnbr_fd(id, 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, ft_test);
	signal(SIGUSR2, ft_test);
	while (1)
	{
		usleep(1000);
	}
}
