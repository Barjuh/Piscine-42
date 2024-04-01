/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:25:45 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/25 15:47:16 by mbourach         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	checker;

	cap = 0;
	checker = 1;
	ft_strlowcase(str);
	while (str[cap] != '\0')
	{
		if (str[cap] >= 'a' && str[cap] <= 'z')
		{
			if (checker == 1)
			{
				str[cap] -= 32;
				checker = 0;
			}
		}
		else if (str[cap] >= '0' && str[cap] <= '9')
			checker = 0;
		else
			checker = 1;
		cap++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s devient : ", argv[1]);
	ft_strcapitalize(argv[1]);
	printf("%s", argv[1]);
	return (0);
}*/
