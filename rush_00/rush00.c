/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:26:25 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/06 08:49:26 by esda-sil         ###   ########.fr       */
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
			if (linha == 1 && (coluna == 1 || coluna == x))
				ft_putchar('o');
			else if (linha == y && (coluna == 1 || coluna == x))
				ft_putchar('o');
			else if (linha == 1 || linha == y)
				ft_putchar('-');
			else if (coluna == x || coluna == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
			coluna = 0;
	}
}
