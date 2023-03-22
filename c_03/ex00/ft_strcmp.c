/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:41:49 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/22 08:01:14 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	length;

	length = 0;
	while (s1[length] != '\0' && s2[length] != '\0' && s1[length] == s2[length])
	{
		length++;
	}
	if (s1[length] == '\0' && s2[length] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[length] - s2[length]);
	}
}



// #include <stdio.h>

// int	ft_strcmp(char *s1, char *s2);

// int main(void)
// {
// 	char str1[] = "abc";
// 	char str2[] = "abc";
// 	int result;

// 	result = ft_strcmp(str1, str2);

// 	if (result == 0)
// 	{
// 		printf("As Strings são iguais! :)\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("A String 1 é menor que a String 2! :(\n");
// 	}
// 	else
// 	{
// 		printf("A string 1 é maior que a string 2! :(\n");
// 	}

// 	return (0);
// }