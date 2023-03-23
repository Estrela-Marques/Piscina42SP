/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:53:08 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/23 15:02:56 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	numb;
	int	mult;
	int	count;

	mult = 1;
	count = 0;
	while ((str[count] > 6 && str[count] < 14) || str[count] == 32)
	{
		count++;
	}
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
		{
			mult = mult * (-1);
		}
		count++;
	}	
	while (str[count] >= '0' && str[count] <= '9')
	{
		numb = (numb * 10) + (str[count] - '0');
		count++;
	}
	numb = numb * mult;
	return (numb);
}
