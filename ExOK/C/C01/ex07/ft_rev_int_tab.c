/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:27:40 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/20 14:46:25 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temptab;
	int	tab1;
	int	tab2;

	tab1 = 0;
	tab2 = size - 1;
	while (tab1 < tab2)
	{
		temptab = tab[tab1];
		tab[tab1] = tab[tab2];
		tab[tab2] = temptab;
		tab1++;
		tab2--;
	}
}
/*
int		main (void)
{
	int tab[5] = {1, 2, 3, 4, 5};

	printf("%d,%d,%d,%d,%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	ft_rev_int_tab(tab, 5);

	printf("%d,%d,%d,%d,%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
