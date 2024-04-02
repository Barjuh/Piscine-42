/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:26:16 by mbourach          #+#    #+#             */
/*   Updated: 2024/04/01 17:26:19 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	i;

	i = 1;
	sqrt = 0;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		sqrt++;
	}
	if (nb < 0)
		return (0);
	return (sqrt);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 2)
		return (-1);
	result = ft_sqrt(atoi(argv[1]));
	if (result != 0)
		printf("La racine carrée de %d est %d\n", atoi(argv[1]), result);
	else
		printf("%d n'a pas de racine carrée entière\n", atoi(argv[1]));
	return (0);
}*/
