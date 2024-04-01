/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:44:57 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/26 19:57:49 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0')
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
	if (argc != 3)
		return (1);
	printf("str 1 : %s + str 2 : %s\n", argv[1], argv[2]);
	printf("donne : %s", ft_strcat(argv[1], argv[2]));
	return (0);
}*/
