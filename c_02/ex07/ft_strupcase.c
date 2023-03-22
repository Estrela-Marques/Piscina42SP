/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:25:25 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/19 18:31:58 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	bigletter;

	bigletter = 0;
	while (str[bigletter] != '\0')
	{
		if (str[bigletter] >= 97 && str[bigletter] <= 122)
		{
			str[bigletter] = str[bigletter] - 32;
		}
		bigletter++;
	}
	return (str);
}
