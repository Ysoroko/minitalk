/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:36:18 by ysoroko           #+#    #+#             */
/*   Updated: 2021/04/02 11:25:01 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** This function will compare the file's name extension (via string after '.')
** to the expected extension provided as an argument
** Returns 1 if the extension is wrong/not accepted, 0 otherwise
*/

int	ft_wrong_extension(char *file_name, char *expected_extension)
{
	int	i;

	i = 0;
	while (file_name[i] && file_name[i] != '.')
		i++;
	if (!file_name[i])
		return (1);
	if (file_name[i] == '.')
	{
		if (ft_strlcmp(&(file_name[i + 1]), expected_extension) != 0)
			return (1);
	}
	return (0);
}
