#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1 == s2)
            return (0);
        else if (s1 != s2)
            return (s1[i] - s2[i]);
        else if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1);
        i++;
    }
    return (1);
}

int main(int argc, char const *argv[])
{
    char s1[] = "aa";
    char s2[] = "aaaaaaaaaaa";
    printf("%d\n", ft_strcmp(s1, s2));
    printf("%d\n", strcmp(s1, s2));
    return 0;
}
