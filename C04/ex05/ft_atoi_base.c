/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:59:36 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/31 18:59:39 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;
	int	j;
	char	*b;
	
	i = 0;
	b = base;
	while (b[i] != '\0')
	{
		if (b[i] == '+' || b[i] == '-' || b[i] == ' ' || (b[i] >= '\t' && b[i] <= '\r'))
			return (0);
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putllnbr_base(long long int nbr, char *base)
{
	int	baselen;
	
	baselen = ft_baselen(base);
	if (baselen < 2)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= baselen)
	{
		ft_putllnbr_base(nbr / baselen, base);
		ft_putllnbr_base(nbr % baselen, base);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putllnbr_base(nbr, base);
}
