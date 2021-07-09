/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:39:35 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/09 15:11:36 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_test(int sig)
{
	sig = 0;
	ft_putnbr_fd(sig, 1);
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
	signal(SIGUSR1, ft_test);
	signal(SIGUSR2, ft_test);
	while (1)
		usleep(1000);
}
