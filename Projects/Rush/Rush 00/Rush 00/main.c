#include <unistd.h>

void pf_putchar(char c)
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

int main(int argc, char const *argv[])
{
    rush(5, 3);
    return 0;
}

