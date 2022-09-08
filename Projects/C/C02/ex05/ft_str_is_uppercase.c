/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:57:09 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 18:57:13 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*int main(int argc, char const *argv[])
{
    char alfhabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", ft_str_is_uppercase(alfhabet));
    char alfhabet1[] = "abcdefghijklmnopqrstuvwxyz";
    printf("%d\n", ft_str_is_uppercase(alfhabet1));
    char numbers[] = "";
    printf("%d\n", ft_str_is_uppercase(numbers));
    return 0;
}*/
