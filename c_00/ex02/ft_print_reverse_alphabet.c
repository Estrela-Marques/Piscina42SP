/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:50:59 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/15 08:40:54 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	reversealphabet;

	reversealphabet = 'z';
	while (reversealphabet >= 'a')
	{
		write(1, &reversealphabet, 1);
		reversealphabet--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }