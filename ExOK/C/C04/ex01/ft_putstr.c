/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:08:16 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/27 17:20:23 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		ft_putchar(str[p]);
		p++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	ft_putstr(argv[1]);
	return (0);
}*/
