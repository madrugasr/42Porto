/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:53:45 by danolive          #+#    #+#             */
/*   Updated: 2022/08/27 11:53:50 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 10;
    printf("A: %d B: %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("A: %d B: %d\n", a, b);
    return 0;
}
*/