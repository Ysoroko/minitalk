/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:26:39 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:05:45 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_CHAR_ALLOC
** Malloc's the required space for a string to be printed by printf
** Is like "calloc", but instead of filling the string with zeroes it fills it
** with the char provided in the argument
** Note: N_CHARS shouldn't include space for '\0' (strlen can be used for it)
** Returns the pointer to the newly allocated string, NULL if malloc fails
*/

char	*ft_char_alloc(int n_chars, char c)
{
	char	*ret_str;
	int		i;

	ret_str = malloc(sizeof(*ret_str) * (n_chars + 1));
	if (!(ret_str))
		return (0);
	i = -1;
	while (++i < n_chars)
		ret_str[i] = c;
	ret_str[n_chars] = 0;
	return (ret_str);
}
