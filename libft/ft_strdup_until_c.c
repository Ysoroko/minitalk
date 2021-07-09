/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_until_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:23:58 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/05 18:04:28 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRDUP_UNTIL_C
** Same as strdup, but will stop copying if a 'c' argument character is seen 
** This character seen is included in the copy (useful for minishell)
*/

char	*ft_strdup_until_c(const char *src, char c)
{
	char	*str;
	char	*my_src;

	if (!src)
		return (0);
	my_src = (char *)(src);
	str = malloc(sizeof(*str) * (ft_strlen_until_c(my_src, c) + 1));
	if (!str)
		exit(EXIT_FAILURE);
	return (ft_strcpy_until_c(str, my_src, c));
}
