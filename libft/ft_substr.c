/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:14:38 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:24:46 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*my_s;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	my_s = (char *)(s);
	if (start >= (unsigned int)(ft_strlen(my_s)))
	{
		ret = ft_strdup("");
		return (ret);
	}
	ret = malloc(sizeof(s[start]) * (len + 1));
	if (ret == 0)
		return (0);
	while (i < len && s[i] != 0)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
