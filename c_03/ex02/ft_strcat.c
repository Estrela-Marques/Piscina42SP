/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esda-sil <esda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:20:57 by esda-sil          #+#    #+#             */
/*   Updated: 2023/03/21 16:29:50 by esda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	ind_d;
	int	ind_s;

	ind_d = 0;
	ind_s = 0;
	while (dest[ind_d] != '\0')
	{
		ind_d++;
	}
	while (src[ind_s] != '\0')
	{
		dest[ind_d] = src[ind_s];
		ind_s++;
		ind_d++;
	}
	dest[ind_d] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char resultado[50] = "Oie, você ";
//   printf("%s\n", resultado);

//   strcat(resultado, "é a coisa ");
//   printf("%s\n", resultado);

//   strcat(resultado, "mais fofa ");
//   printf("%s\n", resultado);  
//   char curso[10] = "do mundo!";
//   strcat(resultado, curso);
//   printf("%s", resultado);  
//   return 0;
// }	      
