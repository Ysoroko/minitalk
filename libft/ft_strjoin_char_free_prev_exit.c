/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char_free_prev.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:28:21 by ysoroko           #+#    #+#             */
/*   Updated: 2021/07/12 11:36:25 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** static char	*ft_null_str_case(char c)
** In case where *str is a NULL pointer in the main function,
** we simply need to create a new string with a single character c
** followed by a '\0' char.
** This function does it.
*/

static char	*ft_null_str_case(char c)
{
	char	*ret;

	ret = malloc(sizeof(char) * 2);
	if (!ret)
		exit(EXIT_FAILURE);
	ret[0] = c;
	ret[1] = 0;
	return (ret);
}

/*
** char	*ft_strjoin_char_free_prev(char **str, char c)
** This function will return a malloc'd copy of str with char argument c
** added at the end of it.
** It will also free the previous value of str.
** Exits the program if a malloc fails inside.
*/

char	*ft_strjoin_char_free_prev_exit(char **str, char c)
{
	int		final_len;
	int		i;
	char	*ret;

	if (!str)
		return (0);
	if (!*str)
		return (ft_null_str_case(c));
	final_len = ft_strlen(*str) + 1;
	ret = malloc(sizeof(char) * (final_len + 1));
	if (!ret)
		exit(EXIT_FAILURE);
	i = -1;
	while ((*str)[++i])
		ret[i] = (*str)[i];
	ret[i] = c;
	ret[++i] = 0;
	free(*str);
	return (ret);
}
