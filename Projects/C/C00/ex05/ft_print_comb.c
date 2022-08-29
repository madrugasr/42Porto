/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:42:12 by danolive          #+#    #+#             */
/*   Updated: 2022/08/25 08:05:19 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{	
	int	d1;
	int	d2;
	int	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				ft_putchar(d1);
				ft_putchar(d2);
				ft_putchar(d3);
				if (d1 < '7')
					write(1, ", ", 2);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}

int main(int argc, char const *argv[])
{
	ft_print_comb();
	return 0;
}
