#include <unistd.h>

void pf_putchar_(char c)
{
    write(1, &c, 1);
}

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

int main()
{
    rush(10,10);
    return 0;
}

