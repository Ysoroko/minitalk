/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:03:29 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:19:34 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp_s;
	char			*my_s;
	unsigned int	i;
	int				len;

	if (!s || !f)
		return (0);
	temp_s = (char *)s;
	i = 0;
	len = ft_strlen(temp_s);
	my_s = malloc(sizeof(char) * (len + 1));
	if (!my_s)
		return (0);
	my_s[len] = '\0';
	while (temp_s[i] != '\0')
	{
		my_s[i] = f(i, temp_s[i]);
		i++;
	}
	return (my_s);
}
