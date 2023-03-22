/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:56:49 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/18 09:58:43 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int main()
{
	int valor = 10;	
	int *p_valor1 = &valor;
	int **p_valor2 = &p_valor1;
	int ***p_valor3 = &p_valor2;
	int ****p_valor4 = &p_valor3;
	int *****p_valor5 = &p_valor4;
	int ******p_valor6 = &p_valor5;
	int *******p_valor7 = &p_valor6;
	int ********p_valor8 = &p_valor7;
	int *********p_valor9 = &p_valor8;

	printf("Valor antes: %d\n", valor);
	ft_ultimate_ft(p_valor9);
	printf("Valor depois: %d\n", valor);
	return (0);
}