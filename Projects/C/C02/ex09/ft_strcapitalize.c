/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:08:17 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 19:08:19 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] = str[c] + 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A'))
			i = 0;
		else if ((str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
