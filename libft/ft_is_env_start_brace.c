/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_env_start_brace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:19:21 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/04 14:32:05 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_is_env_start_quote
** This function checks if the character argument is a { or a ( character
** It is used to check if the character following the $ character 
** needs to be considered as a valid env variable name or not.
** Returns 1 if the character is { or (
** Returns 0 otherwise
*/

int	ft_is_env_start_quote(char c)
{
	if (c == '{' || c == '(')
		return (1);
	return (0);
}
