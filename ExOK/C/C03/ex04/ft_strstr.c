/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourach <mbourach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:06:33 by mbourach          #+#    #+#             */
/*   Updated: 2024/03/28 10:21:34 by mbourach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		d = 0;
		while (str[c + d] == to_find[d] && str[c + d] != '\0')
		{
			if (to_find[d + 1] == '\0')
				return (&str[c]);
			d++;
		}
		c++;
	}
	return (0);
}
