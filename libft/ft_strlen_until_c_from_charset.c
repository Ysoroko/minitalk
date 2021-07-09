/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_until_c_from_charset.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:39:34 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/05 18:05:31 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRLEN_UNTIL_C_FROM_CHARSET
** Same as strlen, but will stop counting if a character  from "charset"
** argument is seen 
** This character seen is included in the count (useful for minishell)
*/

int	ft_strlen_until_c_from_charset(const char *str, char *charset)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && !ft_strchr(charset, str[i]))
		i++;
	if (ft_strchr(charset, str[i]))
		i++;
	return (i);
}
