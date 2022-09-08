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

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	is_non_printable(unsigned char c)
{
	return (c < 32 || c > 126);
}

void	print_hex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base [c / 16]);
	ft_putchar(base [c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_non_printable(str[i]))
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
int main(){
	char str[] = "Oi\nvoce esta b\nem?";
	
	ft_putstr_non_printable(str);
}*/
