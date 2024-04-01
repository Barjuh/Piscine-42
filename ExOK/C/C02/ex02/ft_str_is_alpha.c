/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:21:58 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 20:04:45 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || (str[a] > 'Z' && str[a] < 'a') || str[a] > 'z')
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int	alpha;

	alpha = (ft_str_is_alpha(argv[1]));
	if (alpha == 0)
		printf("La chaîne contient des caractères non alphabétiques.\n");
	else
		printf("La chaîne contient uniquement des caracteres alphabétiques.\n");
	return(0);
}*/
