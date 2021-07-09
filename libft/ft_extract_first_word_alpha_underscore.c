/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_first_word_alpha_underscore.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:04 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/27 15:22:21 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** This function will extract the first word of *str argument
** The first word is considered to be composed only of alphabet characters and
** underscore characters
** Returns a malloc'd copy of the first word
** ! if in separators a part of alphabet or '_' is stated, this will lead to
** some unintended results
*/

char	*ft_extract_first_word_alpha_underscore(char *str, char *separators)
{
	int		i;
	int		j;
	char	*first_word;
	char	*temp;

	if (!str)
		return (0);
	i = 0;
	temp = ft_calloc_exit(ft_strlen(str) + 1, sizeof(char));
	while (str[i] && ((!ft_isalpha(str[i]) && str[i] != '_')
			|| ft_strchr(separators, str[i])))
		i++;
	j = 0;
	while (str[i] && (ft_isalpha(str[i]) || str[i] == '_')
		&& !ft_strchr(separators, str[i]))
	{
		temp[j] = str[i];
		i++;
		j++;
	}
	first_word = ft_strdup_exit(temp);
	ft_free_str(&temp);
	return (first_word);
}
