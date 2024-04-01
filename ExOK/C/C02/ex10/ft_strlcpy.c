/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:49:19 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 16:32:49 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	c;

	count = 0;
	c = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[c] != '\0' && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (count);
}
/*
int	main(int argc, char **argv)
{
	char			dest[255];
	unsigned int	count;

	if (argc != 3)
		return (1);
	printf("Chaîne originale : %s\n", argv[1]);
	count = ft_strlcpy(dest, argv[2], sizeof(dest));
	printf("Chaîne copiée : %s\n", dest);
	printf("Nombre de caractères copiés : %u\n", count);
	return (0);
}*/
