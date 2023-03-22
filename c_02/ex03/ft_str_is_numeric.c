/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:42:42 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/19 18:56:59 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] < 48 || str[number] > 57))
		{
			return (0);
		}
		number++;
	}
	return (1);
}
