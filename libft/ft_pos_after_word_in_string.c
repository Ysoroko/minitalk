/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_after_word_in_string.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:18:20 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/12 17:40:11 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** FT_POS_AFTER_THE_WORD_IN_STRING
** Returns the adress in *str following the word or 0 if the word doesn't occur
** in str
*/

char	*ft_pos_after_the_word_in_string(char *str, char *word)
{
	int		i;
	char	*temp;

	if (!str || !word)
		return (0);
	i = 0;
	temp = ft_strnstr(str, word, ft_strlen(str));
	if (!temp)
		return (0);
	while (temp[i] == word[i] && temp[i] && word[i])
		i++;
	return (&temp[i]);
}
