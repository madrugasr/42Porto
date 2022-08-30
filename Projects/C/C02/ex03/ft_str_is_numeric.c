/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:51:28 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 18:51:32 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
int main(int argc, char const *argv[])
{
    char src[] = "Just Dance";
    printf("%d\n", ft_str_is_numeric(src));
    char src1[] = "432321";
    printf("%d\n", ft_str_is_numeric(src1));
    return 0;
}
*/
