/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_after_n_one_or_two_words.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:56:11 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/05 14:41:47 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** ft_pos_after_n_one_or_two_words
** Returns the position after n_words words (the count starts at 1!) based
** on seps separators.
*/

char	*ft_pos_after_n_one_or_two_words(char *str, int n_words, char *seps)
{
	char	*last_word;
	char	*ret;

	if (!str)
		return (0);
	if (n_words == 1)
		last_word = ft_extract_first_word_qx(str, seps);
	else if (n_words == 2)
		last_word = ft_extract_second_word_qx(str, seps);
	else
		return (0);
	if (!last_word)
		return (0);
	ret = ft_pos_after_the_word_in_string(str, last_word);
	ft_free_str(&last_word);
	return (ret);
}
