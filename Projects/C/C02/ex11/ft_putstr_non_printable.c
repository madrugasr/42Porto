/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:20:03 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 19:20:06 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			
			ft_putchar(str[i] / 16 + '0');
			ft_putchar(str[i] % 16 + '0');
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int argc, char const *argv[])
{
    char a[] = "Oi\nvoce \t esta bem?";
    ft_putstr_non_printable(a);
    return 0;
}

