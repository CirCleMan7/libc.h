#include <string.h>
#include <stdio.h>

int    ft_strncmp(char *str1, char *str2, int amount)
{
    int diff = 0;
    if (amount == 0)
        return 0;
    while (amount && *str1 == *str2 && *str1 && *str2)
        {
            str1++;
            str2++;
            amount--;
        }
    return (*str1 - *str2);
}

int main()
{
    char a[100] = "\0eellokdwabbbbb";
    char b[100] = "\0eellokzwabbbbb";
    
    printf("ft_strncmp = %d\n", ft_strncmp(a, b, -5));
    printf("strncmp    = %d", strncmp(a, b, -5));
}