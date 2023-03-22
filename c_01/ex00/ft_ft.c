/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:25:06 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/18 09:57:04 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main()
{
	int idade;
	idade = 31;
	printf("Valor de idade antes: %d\n", idade);
	ft_ft(&idade);
	printf("Valor de idade depois: %d\n", idade);
	return (0);
}
