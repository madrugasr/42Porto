/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:54:26 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 18:54:29 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
int main(int argc, char const *argv[])
{
    char alfhabet[] = "abcdefghijklmnopqrstuvwxyz";
    printf("%d\n", ft_str_is_lowercase(alfhabet));
    char alfhabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", ft_str_is_lowercase(alfhabet1));
    char numbers[] = "0123456789";
    printf("%d\n", ft_str_is_lowercase(numbers));
    return 0;
}
*/
