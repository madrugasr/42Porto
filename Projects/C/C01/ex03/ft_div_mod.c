/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:50:38 by danolive          #+#    #+#             */
/*   Updated: 2022/08/27 11:50:41 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 10;
    int div;
    int mod;
    printf("A: %d\nB: %d\n", a, b);
    ft_div_mod(a, b, &div, &mod);
    printf("Div: %d\nMod: %d\n", div, mod);

    return 0;
}
*/