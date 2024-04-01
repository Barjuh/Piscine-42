/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:53:56 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/14 19:11:53 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	np;

	if (n < 0)
	{
		np = 'N';
	}
	else
	{
		np = 'P';
	}
	ft_putchar(np);
}
/*
int	main(void)
{
	int	number;

	number = 25;
	ft_is_negative(number);
	number = -95;
	ft_is_negative(number);
	number = 50;
	ft_is_negative(number);
	number = -63;
	ft_is_negative(number);
	return (0);
}*/
