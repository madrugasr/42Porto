/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:45:23 by danolive          #+#    #+#             */
/*   Updated: 2022/08/28 18:45:28 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(int argc, char const *argv[])
{
    char src[] = "Just Dance";
    printf("%d\n", ft_str_is_alpha(src));
    char src1[] = "JustDance";
    printf("%d\n", ft_str_is_alpha(src1));
    return 0;
}*/
