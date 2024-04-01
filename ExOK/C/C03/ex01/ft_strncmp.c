/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:58:03 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/26 14:45:09 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0') && (c < n))
		c++;
	if (c == n)
		return (0);
	return (s1[c] - s2[c]);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("Avec ft_strncpy : %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("Avec strncpy : %d", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
