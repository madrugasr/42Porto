/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:34:01 by danolive          #+#    #+#             */
/*   Updated: 2022/09/04 17:34:03 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (*1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));
    return 0;
}
*/
