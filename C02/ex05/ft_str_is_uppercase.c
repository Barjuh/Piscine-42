/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:28:57 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 14:37:36 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if (str[u] < 'A' || str[u] > 'Z')
			return (0);
		u++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	int	upp;

	if (argc != 2)
		return (1);
	upp = ft_str_is_uppercase(argv[1]);
	if (upp == 0)
		printf("La chaine contient des caracteres non majuscules");
	else
		printf("La chaine contient uniquement des caracteres majuscules");
	return (0);
}*/
