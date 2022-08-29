#include <unistd.h>

void ft_putchar(char c)
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
			if ((line == y && col == x) && (x != 1 && y != 1))
				ft_putchar('/');
			else if (line == 1 && col == 1)
				ft_putchar('/');
			else if ((line == 1 && col == x) || (line == y && col == 1))
				ft_putchar('\\');
			else if (col == 1 || line == 1 || line == y || col == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		col = 1;
		ft_putchar('\n');
		line++;
	}
}

int main(int argc, char const *argv[])
{
	rush(5,5);
	return 0;
}
