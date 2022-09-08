
#include <stdio.h>
#include <unistd.h>

void ft_putnbr_base(int nbr, char *base)
{
    int i;
    int j;
    int base_len;
    int nbr_len;
    int nbr_copy;
    int nbr_base[100];

    i = 0;
    j = 0;
    base_len = 0;
    nbr_len = 0;
    nbr_copy = nbr;
    while (base[base_len] != '\0')
        base_len++;
    while (nbr_copy != 0)
    {
        nbr_base[i] = nbr_copy % base_len;
        nbr_copy = nbr_copy / base_len;
        i++;
        nbr_len++;
    }
    while (j < nbr_len)
    {
        write(1, &base[nbr_base[nbr_len - j - 1]], 1);
        j++;
    }

}

int main()
{
    ft_putnbr_base(2147483647, "0123456789ABCDE");
    return 0;
}

