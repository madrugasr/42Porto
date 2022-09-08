/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:43:16 by danolive          #+#    #+#             */
/*   Updated: 2022/09/04 17:43:18 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		else
			i++;
	}
	return (nb);
}

/*
int main(void)
{
    printf("%d\n", ft_find_next_prime(0));
    return (0);
}
*/
