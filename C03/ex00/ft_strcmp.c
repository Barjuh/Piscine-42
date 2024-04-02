/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:59:01 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/26 12:57:18 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	
	printf("%d, %d\n", ft_strcmp(argv[1], argv[2]), strcmp(argv[1], argv[2]));
	return (0);
}*/
