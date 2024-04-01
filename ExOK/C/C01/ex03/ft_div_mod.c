/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:40:26 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/18 18:39:13 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = (a / b);
	*mod = (a % b);
	}
}
/*
int	main(void)
{
	int	a  = 39;
	int	b  = 17;
	int	*div = &a;
	int	*mod = &b;

	ft_div_mod(a, b, div, mod);
	
	printf("a vaut : %d\n",*div);
	printf("b vaut : %d",*mod);

	return (0);
}*/
