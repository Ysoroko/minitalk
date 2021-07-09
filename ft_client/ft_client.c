/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:33:40 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/09 15:12:40 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

/*
** static int	ft_found_errors_in_main(int argc, char **argv)
** This function is used to check for errors in main arguments.
** Errors include:
** 1) Wrong number of args
** 2) 
*/

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
** static void	ft_send_next_char_bit_by_bit(char c, int pid)
** This function will take a char c as an argument and send its binary values
** one bit at a time to the process identified by pid argument (our server).
** We will use SIGUSR2 (=31) to send "1" and SIGUSR1 (=30) to send "0".
** The line "if (c & 0x01)" compares the current bit to 1
** The line "c = c >> 1" moves on to the next bit in c.
*/

static void	ft_send_next_char_bit_by_bit(char c, int pid)
{
	int	i;

	i = -1;
	while (i < 8)
	{
		if (c & 0x01)
			kill(pid, SIGUSR2); //31 = 1
		else
			kill(pid, SIGUSR1); //30 = 0
		c = c >> 1;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str_to_send;
	int		i;

	if (ft_found_errors_in_main(argc, argv))
		return (-1);
	pid = ft_atoi(argv[1]);
	str_to_send = argv[2];
	i = -1;
	while (str_to_send[++i])
		ft_send_next_char_bit_by_bit(str_to_send[i], pid);
}
