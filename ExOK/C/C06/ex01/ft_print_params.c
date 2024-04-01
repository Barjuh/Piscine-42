/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:34:44 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/28 13:36:47 by mbourach         ###   ########.fr       */
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
	int	d;

	argvlen = 0;
	c = 1;
	while (argv[argvlen])
		argvlen++;
	if (argc != argvlen)
		return (1);
	while (c < argvlen)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			ft_putchar(argv[c][d]);
			d++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}
