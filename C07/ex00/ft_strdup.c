/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:31:15 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/30 15:13:23 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*dest;

	if (argc != 2)
		return (1);

	printf("La string source est : %s\n", argv[1]);
	dest = ft_strdup(argv[1]);
	printf("La string copiée est : %s\n", dest);
	return (1);
}*/
