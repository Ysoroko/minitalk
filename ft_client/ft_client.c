/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:33:40 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/08 11:52:21 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static int	ft_found_errors_in_main(int argc, char **argv)
{
	int	i;

	if (argc != 3)
		return (1);
	i = -1;
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
			return (1);
	}
	return (0);
}

/*
** kill sends the signal
*/

int	main(int argc, char **argv)
{
	int	pid;

	if (ft_found_errors_in_main(argc, argv))
		return (-1);
	pid = ft_atoi(argv[1]);
	kill(pid, SIGUSR1);
}