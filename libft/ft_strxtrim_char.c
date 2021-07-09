/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxtrim_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:02:07 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/12 15:07:59 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRxTRIM_CHAR
** This function removes all characters present in "except" argument
** at the start and the end of "str" argument (but not in its middle)
** The difference with ft_strtrim lies in use of exit function in case
** of a malloc failure
** Returns the malloc'd version of str without all the characters
** from "except at the start and the end of the string
** Example: str = "_ ;bon; _jour;_", except = "; _" ->result = "bon; _jour"
*/

char	*ft_strxtrim_char(char *str, char except)
{
	int		i;
	int		j;
	char	*ret;

	if (!str)
		return (0);
	if (!str[0])
		return (ft_strdup_exit(""));
	if (!except || !except)
		return (ft_strdup_exit(str));
	i = 0;
	j = ft_strlen(str) - 1;
	while (str[i] == except)
		i++;
	while (str[j] == except)
		j--;
	j++;
	if (j <= i)
		return (0);
	ret = malloc(sizeof(char) * (j - i + 1));
	if (!ret)
		exit(EXIT_FAILURE);
	ft_strlcpy(ret, &str[i], j - i + 1);
	return (ret);
}
