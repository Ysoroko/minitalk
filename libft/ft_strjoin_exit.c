/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_exit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:50:49 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/09 13:53:18 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_STRJOIN_EXIT
** Same as ft_strjoin, but instead of returning NULL when a malloc fails
** this function calls exit(EXIT_FAILURE)
*/

char	*ft_strjoin_exit(char *pref, char *suff)
{
	char	*ret;
	size_t	i;
	size_t	j;

	if (!pref)
		return (0);
	if (!suff)
		return (ft_strdup_exit(pref));
	i = -1;
	j = -1;
	pref = (char *)(pref);
	suff = (char *)(suff);
	ret = malloc(sizeof(char) * (ft_strlen(pref) + ft_strlen(suff) + 1));
	if (!ret)
		exit(EXIT_FAILURE);
	while (pref[++i] != '\0')
		ret[i] = pref[i];
	while (suff[++j] != '\0')
	{
		ret[i] = suff[j];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
