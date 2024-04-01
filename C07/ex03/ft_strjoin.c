/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:29:28 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/31 13:29:34 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0')
		dest[c++] = src[d++];
	dest[c] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_totallen(int size, char **strs, char *sep)
{
	int	totallen;
	int	i;

	totallen = 0;
	i = 0;
	while (i < size)
		totallen += ft_strlen(strs[i++]);
	if (size > 1)
		totallen += ft_strlen(sep) * (size - 1);
	return (totallen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*retour;
	int		totallen;
	int		i;

	if (size == 0)
	{
		retour = malloc(sizeof(char));
		retour[0] = '\0';
		return (retour);
	}
	totallen = ft_totallen(size, strs, sep);
	retour = malloc(sizeof(char) * (totallen + 1));
	if (retour == NULL)
		return (NULL);
	i = 0;
	retour[0] = '\0';
	while (i < size)
	{
		ft_strcat(retour, strs[i]);
		if (i < (size - 1))
			ft_strcat(retour, sep);
		i++;
	}
	return (retour);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*retour;
	int	argvlen;
	
	argvlen = 0;
	while (argv[argvlen] != NULL)
		argvlen++;
	if (argc != argvlen)
		return (1);
	retour = ft_strjoin(argc - 2, argv + 1, argv[argvlen - 1]);
	printf("Résultat : %s\n", retour);
	free(retour);
	return (0);
}*//
