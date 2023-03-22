/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:26:25 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/05 16:17:51 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	linha = 0;
	coluna = 0;

	while (linha++ < y)
	{
		while (coluna++ < x)
		{
			if (linha == 1 && coluna == 1 || linha == 1 && coluna == 5)
				ft_putchar('A');
			else if (linha == y && coluna == 1 || linha == y && coluna == x)
				ft_putchar('C');
			else if (linha == 1 || coluna == 1 || linha == y || coluna == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
			coluna = 0;
	}
}
