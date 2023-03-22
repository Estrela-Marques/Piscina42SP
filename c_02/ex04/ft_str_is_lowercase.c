/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:58:13 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/19 18:54:57 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	lowercase;

	lowercase = 0;
	while (str[lowercase] != '\0')
	{
		if (str[lowercase] < 97 || str[lowercase] > 122)
		{
			return (0);
		}
		lowercase++;
	}
	return (1);
}
