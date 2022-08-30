/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:42:16 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 18:42:21 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == n)
		dest[i] = '\0';
	return (dest);
}

/*int main(int argc, char const *argv[])
{
    char dest[2];
    char src[] = "What in Done";
    ft_strncpy(dest, src, 2);
	printf("%s\n", dest);
    return 0;
}*/
