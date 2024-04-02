/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoolszew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:03:53 by zoolszew          #+#    #+#             */
/*   Updated: 2024/03/17 19:18:27 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	l = 1;
	while (l <= y && x > 0 && y > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c != 1 && c != x) && (l == 1 || l == y))
				ft_putchar('-');
			else if ((l != 1 && l != y) && (c == 1 || c == x))
				ft_putchar('|');
			else if (c == 1 || c == x || l == 1 || l == y)
				ft_putchar('o');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
