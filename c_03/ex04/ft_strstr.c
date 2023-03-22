/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:01:55 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/22 09:34:45 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *a, char *b);

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;

	if (*to_find == '\0')
	{
		return (str);
	}
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == to_find[0] && compare (&str[counter], to_find))
		{
			return (&str[counter]);
		}
		else
		{
			counter++;
		}
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	compare(char *a, char *b)
{
	int	index;

	index = 0;
	while (a[index] != '\0' && b[index] != '\0')
	{
		if (a[index] == b[index])
		{
		index++;
		}
		else
		{
			return (0);
		}
		return (1);
	}
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Oi cabeção de ovo";
// 	printf("%s\n", ft_strstr(str, "c"));
// 	printf("%s\n", ft_strstr(str, ""));
// 	printf("%p\n", ft_strstr(str, "pão"));
// }
