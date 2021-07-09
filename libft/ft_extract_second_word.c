/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_second_word.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:21:56 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/12 14:53:52 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_EXTRACT_SECOND_WORD
** This function extracts the second word from the "from" argument
** depending on the "separators" argument
** This is used to extract the flags in minishell
*/

char	*ft_extract_second_word(char *from, char *separators)
{
	int		i;
	char	*ret;

	i = 0;
	while (ft_strchr(separators, from[i]))
		i++;
	while (!ft_strchr(separators, from[i]))
		i++;
	ret = ft_extract_first_word(&(from[i]), separators);
	return (ret);
}
