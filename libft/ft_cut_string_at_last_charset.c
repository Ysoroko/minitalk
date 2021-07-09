/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_string_at_last_charset.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:01:51 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/10 15:04:30 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_cut_string_at_last_charset(char *str, char *charset)
{
	int	i;

	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (ft_strchr(charset, str[i]))
			str[i] = 0;
	}
}
