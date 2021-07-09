/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:56 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/03 16:17:13 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_strcat
** Appends suff to pref, terminates the result by a '\0'
** Returns pref initial address
*/

char	*ft_strcat(char *pref, char *suff)
{
	int	i;
	int	j;

	if (!pref || !suff)
		return (pref);
	i = ft_strlen(pref);
	j = -1;
	while (suff[++j])
	{
		pref[i] = suff[j];
		i++;
	}
	pref[i] = 0;
	return (pref);
}
