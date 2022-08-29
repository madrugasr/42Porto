/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:09:24 by danolive          #+#    #+#             */
/*   Updated: 2022/08/24 02:09:30 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 <= 98)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			ft_putchar((c1 / 10) + '0');
			ft_putchar((c1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((c2 / 10) + '0');
			ft_putchar((c2 % 10) + '0');
			if (c1 < 98)
				write(1, ", ", 2);
			c2++;
		}
		c1++;
	}
}
