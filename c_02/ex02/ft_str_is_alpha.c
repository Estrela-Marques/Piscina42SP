/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:13:21 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/22 08:19:14 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 65 || str[index] > 90)
			&& (str[index] < 97 || str[index] > 122))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	printf("\"abc\": %i\n", ft_str_is_alpha("abc"));
	printf("\"\": %i\n", ft_str_is_alpha(""));
	printf("\"abcdasda1d\": %i\n", ft_str_is_alpha("abcdasda1d"));
}