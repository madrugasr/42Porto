#include <unistd.h>

void pf_putchar_(char c)
{
    write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 1;
	col = 1;
	while (line <= y && (y > 0 && x > 0))
	{
		while (col <= x)
		{
			if ((line == 1 && col == 1) || (line == y && col == 1))
				ft_putchar('A');
			else if ((line == 1 && col == x) || (line == y && col == x))
				ft_putchar('C');
			else if (col == 1 || line == 1 || line == y || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		col = 1;
		ft_putchar('\n');
		line++;
	}
}

int main()
{
    rush(10,10);
    return 0;
}

