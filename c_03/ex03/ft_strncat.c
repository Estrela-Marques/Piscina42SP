/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:41:46 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/22 09:27:50 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_d;
	unsigned int	index_s;

	index_d = 0;
	index_s = 0;
	while (dest[index_d] != '\0')
	{
		index_d++;
	}
	while (index_s < nb && src[index_s] != '\0')
	{
		dest[index_d] = src[index_s];
		index_s++;
		index_d++;
	}
	dest[index_d] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

void	set_str(char *src, char *dest)
{
	int	pos = 0;

	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
}

bool	same_str(char *expected, char *output, int len)
{
	int pos;
	int res;

	res = 1;
	pos = 0;
	while (pos < len)
	{
		char e = expected[pos];
		char o = output[pos];
		if (e != o)
		{
			printf("in pos %d, expected: %d and got: %d\n",
					pos, e, o);
			res = 0;
		}
		pos++;
	}
	if (!res)
		printf("'%s' : '%s' \n", expected, output);
	return res;
}

void reset_strs(char *a, char *b, char *value)
{
	set_str(value, a);
	set_str(value, b);
}

int main() {
	char *s2 = "aaaaa";
	char s1[100] = "";
	char std_s1[100] = "";
	int n = 0;

	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	char *res = ft_strncat(s1, s2, n);
	char *std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res, same_str(std_s1, s1, 10));

	n = 2;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res, same_str(std_s1, s1, 10));

	n = 3;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res, same_str(std_s1, s1, 10));

	n = 4;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res, same_str(std_s1, s1, 10));

	n = 5;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res, same_str(std_s1, s1, 10));
}


// #include <stdio.h>
// #include <string.h>

// int main(){
//   size_t num = 5;
//   char resultado[50] = "Programa de Ensino ";
//   printf("String original:\n%s\n\n", resultado);  
//   strncat(resultado, "e Tutoria - BCC", num);
//   printf("String após os 5 primeiros caracteres serem concatenados:\n");
//   printf("%s\n", resultado);  
//   return 0;
// }	
