#include <string.h>
#include <stdio.h>

char    *ft_strnstr(char *str, char *target, int amount)
{
    char    *answer;
    char    *reset_target;
    int     reverse;

    answer = str;
    reset_target = target;
    if (*target == 0)
        return answer;
    while (*str && amount--)
    {
        reverse = 0;
        printf("amount first loop = %d\n", amount);
        while (*str == *target && amount-- != -1)
        {
            printf("amount first loop = %d\n", amount);
            printf("amount second loop = %c and target = %c\n", *str, *target);
            answer = str;
            str++;
            target++;
            if (*target == 0)
            {
                return (answer - reverse);
                reverse = 0;
            }
            reverse += 1;
        }
        target = reset_target;
        str++;
        printf("final cha = %c\n", *str);
    }
    return 0;
}

int main()
{
    char *scope;
    char a[200] = "laaalasdsadsoijwiqjdioqwjdiowqdjowqidjwidowqjdjoqwidqncjanjnkjnkjqwndjwqndepjpweOOO";
    char b[200] = "OOO";
    char x[200] = "laaalasdsadsoijwiqjdioqwjdiowqdjowqidjwidowqjdjoqwidqncjanjnkjnkjqwndjwqndepjpweOOO";
    char y[200] = "OOO";

    // scope = strnstr(a, b, 4);    // ft_strnstr(x, y, 4);
    printf("ft_strnstr = %s\n", ft_strnstr(x, b, -10));
    printf("strnstr    = %s", strnstr(a, b, -10));
}