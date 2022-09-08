
#include <stdio.h>
#include <unistd.h>

int ft_atoi_base(char *str, char *base)
{
    int i;
    int j;
    int nbr;
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

    return (0);
}

int main()
{
    ft_atoi_base("10", "0123456789");
    return (0);
}