#include <unistd.h>

void pf_putchar_(char c)
{
    write(1, &c, 1);
}
