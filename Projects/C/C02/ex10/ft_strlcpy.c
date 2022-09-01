/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:17:40 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 19:17:42 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
		dest[i] = '\0';
	return i;
}

/*int main(int argc, char const *argv[])
{
    char dest[] = "f/h39rhfi";
    char str[] = "12iqiu";
    printf("%d\n", ft_strlcpy(dest, str, 10));
    return 0;
}*/