/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:23:11 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/27 14:27:50 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("str 1 : %s + str 2 : %s \n", argv[1], argv[2]); 
	printf("donne : %s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
