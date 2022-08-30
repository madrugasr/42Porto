#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, int n)
{
    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < n)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main(int argc, char const *argv[])
{
    char dest[20] = "Daniel ";
    char src[10] = "Marques";
    printf("%s\n", ft_strncat(dest, src, 7));
    return 0;
}
