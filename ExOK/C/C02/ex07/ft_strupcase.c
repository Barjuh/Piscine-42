/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:54:26 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 15:05:49 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] >= 'a' && str[up] <= 'z')
			str[up] -= 32;
		up++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s devient : ", argv[1]);
	ft_strupcase(argv[1]);
	printf("%s", argv[1]);
	return (0);
}*/
