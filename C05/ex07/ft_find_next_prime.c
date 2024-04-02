/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:15:38 by mbourach          #+#    #+#             */
/*   Updated: 2024/04/01 20:15:41 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
	i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	result;
	if (argc != 2)
		return (2);
	result = ft_find_next_prime(atoi(argv[1]));
	if (result == atoi(argv[1]))
		printf("%d est un nombre premier\n", atoi(argv[1]));
	else
	{
		printf("Le nombre premier immédiatement supérieur à");
		printf(" %d est %d\n", atoi(argv[1]), result);
	}
	return (3);
}*/
