/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:18:16 by danolive          #+#    #+#             */
/*   Updated: 2022/08/22 09:18:22 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 1;
	col = 1;
	while (line <= y && (y > 0 && x > 0))
	{
		while (col <= x)
		{
			if ((line == 1 && col == 1) || (line == y && col == 1))
				ft_putchar('A');
			else if ((line == 1 && col == x) || (line == y && col == x))
				ft_putchar('C');
			else if (col == 1 || line == 1 || line == y || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		col = 1;
		ft_putchar('\n');
		line++;
	}
}
