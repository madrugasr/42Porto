/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:16:03 by danolive          #+#    #+#             */
/*   Updated: 2022/08/22 09:16:12 by danolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    int line = 1, column = 1; 

    while (line <= y)
    {
        while (column <= x)
        {
            //Primeira linha e primeira coluna
            if (line == 1 && (column == 1 || column == x))
                pf_putchar_('A');
            //Última linha e última coluna
            else if (line == y && (column == 1 || column == x))
                pf_putchar_('C');
            else if (line == 1 || line == y)
                pf_putchar_('B');
            else if (column == 1 || column == x)
                pf_putchar_('B');
            else
                pf_putchar_(' ');
            column++;
        }
        column = 1;
        pf_putchar_('\n');
        line++;
    }    
}
