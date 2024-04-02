/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:52:53 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/27 17:07:31 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	printf("%s contient %d caractères\n", argv[1], ft_strlen(argv[1]));
	return (0);
}*/
