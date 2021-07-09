/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_not_quoted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:00:16 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/15 14:45:22 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRCHR_NOT_QUOTED
** Same as ft_strchr, but only considers a character to be found if it's not
** between two quotes
*/

char	*ft_strchr_not_quoted(const char *str, int c)
{
	int		i;
	char	*my_str;

	my_str = (char *)(str);
	i = 0;
	while (my_str[i] != '\0')
	{
		if (my_str[i] == c && !ft_char_between_the_quotes(i, my_str))
			return (&my_str[i]);
		i++;
	}
	if (my_str[i] == c)
		return (&my_str[i]);
	return (0);
}
