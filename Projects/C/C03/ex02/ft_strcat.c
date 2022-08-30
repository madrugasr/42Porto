#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main(int argc, char const *argv[])
{
    char dest[100] = "Daniel Lindo ";
    char src[100] = "Marques";
    printf("%s\n", ft_strcat(dest, src));
    return (0);
}
