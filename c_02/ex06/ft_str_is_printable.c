/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:55:02 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/19 18:55:06 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	printchar;

	printchar = 0;
	while (str[printchar] != '\0')
	{
		if (str[printchar] < 32 || str[printchar] > 126)
		{
			return (0);
		}
		printchar++;
	}
	return (1);
}
