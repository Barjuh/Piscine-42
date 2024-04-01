/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:19:48 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 14:34:22 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] < 'a' || str[l] > 'z')
			return (0);
		l++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	int	low;

	if (argc != 2)
		return (1);
	low = ft_str_is_lowercase(argv[1]);
	if (low == 0)
		printf("La chaine contient des caracteres non minuscules");
	else
		printf("La chaine contient uniquement des caracteres minuscules");
	return (0);
}*/
