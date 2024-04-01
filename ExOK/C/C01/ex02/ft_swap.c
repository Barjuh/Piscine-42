/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:30:19 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/18 18:47:14 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}
/*
int	main(void)
{
	int	i = 39;
	int	j = 17;
	int	*a = &i;
	int	*b = &j;

	ft_swap(a, b);
	printf("i vallait 39, et vaut maintenant : %u\n",*a);
	printf("j vallait 17, et vaut maintenant : %u",*b);

	return (0);
}*/
