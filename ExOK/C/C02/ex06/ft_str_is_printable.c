/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:38:20 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 14:45:29 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < ' ' || str[p] > '~')
			return (0);
		p++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	int	print;

	if (argc != 2)
		return (1);
	print = ft_str_is_printable(argv[1]);
	if (print == 0)
		printf("La chaine contient des caracteres non imprimables");
	else
		printf("La chaine contient uniquement des caracteres imprimables");
	return (0);
}*/
