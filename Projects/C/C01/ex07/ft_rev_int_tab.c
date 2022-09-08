/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:16:29 by danolive          #+#    #+#             */
/*   Updated: 2022/08/27 12:16:33 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}


/*
int main()
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/