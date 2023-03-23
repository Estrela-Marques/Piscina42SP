/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:47:58 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/23 14:22:35 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		number;
	long int	nbs;

	nbs = nb;
	if (nbs < 0)
	{
		nbs = -nbs;
		write(1, "-", 1);
	}
	if (nbs > 9)
	{
		ft_putnbr(nbs / 10);
	}
	number = (nbs % 10) + '0';
	write(1, &number, 1);
}
