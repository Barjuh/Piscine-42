/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:53:07 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/21 12:20:48 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] < '0') || (str[n] > '9'))
			return (0);
		n++;
	}
	return (1);
}
/*
int	main()	
{
	char num[] = "0123456789";
	char *p_num;
	p_num = num;
	char special[] = "123 abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* XYZ 789";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;
	printf("-----\n");
	printf("1 = String contains only alphabetical chars\n");
	printf("0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", num, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Empty = %d\n", ft_str_is_numeric(p_emp));
	printf("-----\n");

	return (0);
}*/
