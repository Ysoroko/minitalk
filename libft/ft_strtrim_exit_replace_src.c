/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_exit_replace_src.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:40:24 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/10 16:49:19 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_char_is_in_str(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

/*
** FT_STRTRIM_EXIT_REPLACE_SRC
** This function removes all characters present in "except" argument
** at the start and the end of "str" argument (but not in its middle)
** The difference with ft_strtrim lies in use of exit function in case
** of a malloc failure
** Returns the malloc'd version of str without all the characters
** from "except at the start and the end of the string
** Example: str = "_ ;bon; _jour;_", except = "; _" ->result = "bon; _jour"
** Unlike ft_strtrim_exit it will not simply create a new result string, but 
** also free **src string and return the result
*/

char	*ft_strtrim_exit_replace_src(char **src, char *except)
{
	int		i;
	int		j;
	char	*ret;

	if (!src)
		return (0);
	if (!(*src)[0] || !except || !except[0])
		return (*src);
	i = 0;
	j = ft_strlen(*src) - 1;
	while (ft_char_is_in_str((*src)[i], except))
		i++;
	while (ft_char_is_in_str((*src)[j], except))
		j--;
	j++;
	if (j <= i)
		return (0);
	ret = malloc(sizeof(char) * (j - i + 1));
	if (!ret)
		exit(EXIT_FAILURE);
	ft_strlcpy(ret, &((*src)[i]), j - i + 1);
	ft_free_str(src);
	return (ret);
}
