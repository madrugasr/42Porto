/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:04:31 by danolive          #+#    #+#             */
/*   Updated: 2022/08/22 09:04:40 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    int line = 1, column = 1; 

    while (line <= y)
    {
        while (column <= x)
        {
            if (line == 1 && (column == 1 || column == x))
                pf_putchar_('o');
            else if (line == y && (column == 1 || column == x))
                pf_putchar_('o');
            else if (line == 1 || line == y)
                pf_putchar_('-');
            else if (column == 1 || column == x)
                pf_putchar_('|');
            else
                pf_putchar_(' ');
            column++;
        }
        column = 1;
        pf_putchar_('\n');
        line++;
    }    
}
