/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:13:55 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/28 13:24:57 by mbourach         ###   ########.fr       */
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
	while (argv[argvlen])
		argvlen++;
	if (argc != argvlen)
		return (1);
	c = argvlen - 1;
	while (c > 0)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			ft_putchar(argv[c][d]);
			d++;
		}
		ft_putchar('\n');
		c--;
	}
	return (0);
}
