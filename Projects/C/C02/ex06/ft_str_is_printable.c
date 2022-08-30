/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:59:52 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 18:59:55 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
int main(int argc, char const *argv[])
{
    char printable[] = "abcdefghi";
    printf("%d\n", ft_str_is_printable(printable));
    char not_printable[] = "\n\t\v\r\f\b\e\a\0";
    printf("%d\n", ft_str_is_printable(not_printable));
    return 0;
}
*/
