/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:06:44 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 15:12:33 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	lo;

	lo = 0;
	while (str[lo] != '\0')
	{
		if (str[lo] >= 'A' && str[lo] <= 'Z')
			str[lo] += 32;
		lo++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s devient : ", argv[1]);
	ft_strlowcase(argv[1]);
	printf("%s", argv[1]);
	return (0);
}*/
