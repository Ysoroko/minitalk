/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:39:35 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/12 15:40:48 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

/*
** static int	ft_receive_strlen(int curr_bit)
** This is the function used in the first step to extract the length of the
** final string and initiate the string which will be displayed at the end.
*/

static void	ft_receive_strlen(int *curr_bit, char **str, int *received, int s)
{
	static int	len_val = 0;

	if (s == SIGUSR2)
		len_val += ft_recursive_power(2, *curr_bit);
	if (*curr_bit == 31)
	{
		*received = 1;
		*str = ft_calloc_exit(len_val + 1, sizeof(char));
		*curr_bit = 0;
		len_val = 0;
		return ;
	}
	(*curr_bit)++;
}

/*
** static void	ft_restart_variables(int *len_received, char **str, int *i)
** This function is called at the end of the execution of the program
** after displaying the string in order to reset all of the variables values
*/

static void	ft_restart_variables(int *len_received, char **str, int *i)
{
	*len_received = 0;
	if (str)
	{
		ft_putendl_fd(*str, 1);
		free(*str);
		*str = 0;
	}
	*i = 0;
}

static void	ft_receive_information_from_the_client(int signal)
{
	static int	char_value = 0;
	static int	current_bit = 0;
	static int	len_received = 0;
	static int	i = 0;
	static char	*final_str = 0;

	if (!len_received)
		ft_receive_strlen(&current_bit, &final_str, &len_received, signal);
	else
	{
		if (signal == SIGUSR2)
			char_value += ft_recursive_power(2, current_bit);
		if (current_bit == 7)
		{
			final_str[i++] = char_value;
			current_bit = 0;
			if (char_value == 0)
				return (ft_restart_variables(&len_received, &final_str, &i));
			char_value = 0;
			return ;
		}
		current_bit++;
	}
}

/*
** SIGUSR1 = 30 ---> defines the '0' bit
** SIGUSR2 = 31 --> defines the '1' bit
*/

int	main(void)
{
	int	id;

	id = (int)(getpid());
	ft_putnbr_fd(id, 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, ft_receive_information_from_the_client);
	signal(SIGUSR2, ft_receive_information_from_the_client);
	while (1)
		usleep(WAIT_TIME);
}
