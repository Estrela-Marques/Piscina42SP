/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:03:27 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/15 09:42:29 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

void	print_comb(int d1, int d2)
{
	print(d1);
	print(d2);
}

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d1 = 0;
	while (d1 <= 98)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			print_comb(d1 / 10, d1 % 10);
			write(1, " ", 1);
			print_comb(d2 / 10, d2 % 10);
			if (d1 != 98 || d2 != 99)
			{
				write(1, ", ", 2);
			}
			d2++;
		}
		d1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
