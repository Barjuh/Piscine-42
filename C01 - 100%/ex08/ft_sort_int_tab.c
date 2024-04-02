/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:11:49 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/20 18:51:06 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;

	while (size > 0)
	{
		count = 0;
		while (count < size -1)
		{
			if (tab[count] > tab[count + 1])
				ft_swap(&tab[count], &tab[count + 1]);
			count++;
		}
		size--;
	}
}
/*
int main() 
{
	int tab[5] = {5, 3, 8, 2, 7}; // Tableau à trier
	int size = sizeof(tab) / sizeof(tab[0]); // Taille du tableau

	printf("Tableau avant le tri :\n");
	for (int i = 0; i < size; i++) 
	{
		printf("%d ", tab[i]);
	}
		printf("\n");

    // Appel de la fonction de tri
	ft_sort_int_tab(tab, size);

	printf("Tableau après le tri :\n");
	for (int i = 0; i < size; i++) 
	{
	printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}*/
