/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:12:10 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/18 10:01:49 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

 #include <stdio.h>
 
int main()
{
	int a = 10;
	int b = 5;
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;

	printf("Valor de a = %d\n", a);
	printf("Valor de b = %d\n", b);
	printf("Valor da divisao = %d\n", c);
	printf("Valor do resto = %d\n", *mod);

	ft_div_mod(a, b, div, mod);
	printf("\nDepois\n");

	printf("Valor de a = %d\n", a);
	printf("Valor de b = %d\n", b);
	printf("Valor da divisao = %d\n", c);
	printf("Valor do resto = %d\n", *mod);
}
