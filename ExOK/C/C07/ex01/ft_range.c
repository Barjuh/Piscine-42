/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:25:43 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/30 16:12:20 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*range;
	int	i;
	int	size;

	if (argc != 3)
		return (1);
	range = ft_range(atoi(argv[1]), atoi(argv[2]));
	size = (atoi(argv[2]) - atoi(argv[1]));
	if (range == NULL)
		return (2);
	i = 0;
	while (i < size)
		printf("%d ", range[i++]);
	free(range);
	return (0);	
}*/
