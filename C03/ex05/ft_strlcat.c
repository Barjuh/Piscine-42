/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:05:38 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/30 17:47:46 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	c;
	unsigned int	d;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (size + src_len);
	c = 0;
	d = dest_len;
	while (src[c] != '\0' && (d + 1 < size))
	{
		dest[d] = src[c];
		c++;
		d++;
	}
	dest[d] = '\0';
	return (total_len);
}

int	main(int argc, char **argv)
{
	unsigned int	result;

	if (argc != 4)
		return (1);
	printf("Avant ft_strlcat : %s\n", argv[1]);
	result = ft_strlcat(argv[1], argv[2], atoi(argv[3]));
	printf("Apres ft_strlcat : %s\n", argv[1]);
	printf("Longueur totale : %u\n", result);
	return (0);
}
