/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:19:22 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/18 11:41:27 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size / 2)
	{
		b = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = b;
		a++;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;	
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}

