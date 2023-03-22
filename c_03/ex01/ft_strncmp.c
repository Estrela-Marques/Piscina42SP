/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:04:00 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/22 08:32:31 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (num < n && s1[num] != '\0' && s2[num] != '\0' && s1[num] == s2[num])
	{
		num++;
	}
	if ((s1[num] == '\0' || s2[num] == '\0') && s1[num] == s2[num])
	{
		return (0);
	}
	else
	{
		return (s1[num] - s2[num]);
	}
}

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {
	char *str1 = (char *)"xxxxxx";
	char *str2 = (char *)"yyyyyy";
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 20), ft_strncmp(str1, str2, 20));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 1), ft_strncmp(str1, str2, 1));

	str1 = "abcadef";
	str2 = "abcad";
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));

	str1 = "abcad";
	str2 = "abcadtg";
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));
}
