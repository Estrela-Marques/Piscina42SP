/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:30:48 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/19 18:55:25 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	smallprint;

	smallprint = 0;
	while (str[smallprint] != '\0')
	{
		if (str[smallprint] >= 65 && str[smallprint] <= 90)
		{
			str[smallprint] = str[smallprint] + 32;
		}
		smallprint++;
	}
	return (str);
}
