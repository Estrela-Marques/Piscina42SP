/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:13:54 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/19 18:55:02 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	uppercase;

	uppercase = 0;
	while (str[uppercase] != '\0')
	{
		if (str[uppercase] < 65 || str[uppercase] > 90)
		{
			return (0);
		}
		uppercase++;
	}
	return (1);
}
