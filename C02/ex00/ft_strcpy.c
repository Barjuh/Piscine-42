/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:13:20 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 14:19:07 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	copie[255];

	if (argc != 2)
		return (1);
	ft_strcpy(copie, argv[1]);
	printf("Original : %s\n", argv[1]);
	printf("Copie : %s", copie);
	return (0);
}*/
