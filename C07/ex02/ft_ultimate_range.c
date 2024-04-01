/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:25:45 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/31 12:39:27 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*range;
	int	result;
	int	i;
	
	if (argc != 3)
		return (1);
	result = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	i = 0;
	if (result == -1)
		return (2);
	printf("Tableau de taille %d : ", result);
	while (i < result)
		printf("%d ", range[i++]);
	free(range);
	return (0);
}*/
