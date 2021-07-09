/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:31:28 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:29:48 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_char_in_str(char c, char *except)
{
	int	i;

	i = 0;
	while (except[i] != '\0')
	{
		if (c == except[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_find_i(char *str, char *except)
{
	int	i;

	i = 0;
	while (ft_char_in_str(str[i], except) == 1 && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	ft_find_j(char *str, char *except)
{
	int	j;

	j = ft_strlen(str) - 1;
	while (ft_char_in_str(str[j], except) == 1 && j > 0)
	{
		j--;
	}
	return (j);
}

static int	ft_malen(char *str, char *except)
{
	int	i;
	int	j;

	i = ft_find_i(str, except);
	j = ft_find_j(str, except);
	return (j - i + 1);
}

char	*ft_strtrim(char const *str, char const *except)
{
	char	*my_str;
	char	*my_except;
	char	*ret;
	int		i;
	int		j;

	if (str == 0)
		return (0);
	if (!except)
		return (ft_strdup(str));
	my_str = (char *)(str);
	my_except = (char *)(except);
	i = ft_find_i(my_str, my_except) - 1;
	if (ft_find_j(my_str, my_except) - i <= 0)
		return (ft_strdup(""));
	j = -1;
	ret = malloc(sizeof(char) * (ft_malen(my_str, my_except) + 1));
	if (!ret)
		return (0);
	while (++i <= ft_find_j(my_str, my_except) && my_str[i] != '\0')
		ret[++j] = my_str[i];
	ret[++j] = '\0';
	return (ret);
}
