/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:46:22 by danolive          #+#    #+#             */
/*   Updated: 2022/08/27 11:46:26 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int main(int argc, char const *argv[])
{    
    int a = 1;
    int b = 2;
    //int *pa = &a;
    //int *pb = &b;
    printf("A: %d B: %d\n", a, b);
    ft_swap(&a, &b);
    printf("A: %d B: %d\n", a, b);
    return 0;
}
*/