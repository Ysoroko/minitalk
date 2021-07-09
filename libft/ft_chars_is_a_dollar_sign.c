/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars_is_a_dollar_sign.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:45:38 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/21 15:47:59 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_char_is_a_dollar_sign
** This function returns 1 if str[i] is a '$' character not preceeded by a '\'.
** Returns 0 otherwise
** Used in minishell to determine the start of the env variable sequence
*/

int	ft_char_is_a_dollar_sign(char *str, int i)
{
	if ((str[i] == '$' && i && str[i - 1] != '\\') || (str[i] == '$' && !i))
		return (1);
	return (0);
}
