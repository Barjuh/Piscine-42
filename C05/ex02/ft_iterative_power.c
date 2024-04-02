/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:08:05 by mbourach          #+#    #+#             */
/*   Updated: 2024/04/01 16:08:09 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			result *= nb;
			--power;
		}
	}	
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 3)
		return (1);
	result = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	printf("%d puissance %d = %d\n", atoi(argv[1]), atoi(argv[2]), result);
	return (2);
}*/
