/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:25:50 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/18 10:11:53 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

#include <stdio.h>

int	main()
{
	int total = 0;
total = ft_strlen("Não entre em pânico");
	printf("Quantidade de caracteres: %d", total);
}
