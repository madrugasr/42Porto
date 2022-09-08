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
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	src[] = "f/h39rhfi";
	char	dest[] = "12iqiu";

	int c = ft_strlcpy(dest, src, 7);
	printf("%d \n", c);
	for (int i = 0; dest[i] != '\0'; i++)
	{
		write(1, &dest[i], 1);
	}
	//printf("%d", str);
	return (0);
} 
*/