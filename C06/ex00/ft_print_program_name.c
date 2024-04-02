/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:26:30 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/28 14:12:22 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	argvlen;
	int	c;

	argvlen = 0;
	while (argv[argvlen])
		argvlen++;
	if (argc != argvlen)
		return (1);
	c = 0;
	while (argv[0][c] != '\0')
	{
		ft_putchar(argv[0][c]);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
