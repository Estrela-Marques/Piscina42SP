/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:09:40 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/18 09:59:44 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
#include <stdio.h>

int main()
{
	int val1;
	int val2;

	val1 = 50;
	val2 = 25;
	
	printf("val1: %d - val2: %d\n", val1, val2);
	ft_swap(&val1, &val2);
	printf("val1: %d - val2: %d\n", val1, val2);
}
