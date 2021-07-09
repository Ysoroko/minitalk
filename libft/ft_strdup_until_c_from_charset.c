/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_until_c_from_charset.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:32:13 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/05 18:04:11 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRDUP_UNTIL_C_FROM_CHARSET
** Same as strdup, but will stop copying if a character from "charset" argument
** is seen 
** This character seen is included in the copy (useful for minishell)
*/

char	*ft_strdup_until_c_from_charset(const char *src, char *charset)
{
	char	*str;
	char	*my_src;
	int		len;

	if (!src)
		return (0);
	my_src = (char *)(src);
	len = ft_strlen_until_c_from_charset(my_src, charset);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		exit(EXIT_FAILURE);
	return (ft_strcpy_until_c_from_charset(str, my_src, charset));
}
