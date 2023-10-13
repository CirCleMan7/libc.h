#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

int ft_strlen(char *str);

int strings_len(char *s, char c)
{
    int count;

    count = 0;
    while (*s)
    {
        s++;
        if (*s == c)
            count++;
    }
    return count;
}

int string_len(char *s, char c)
{
    int count;
    while (*s && *s != c)
    {
        s++;
        count++;
    }
    return count;
}

char **ft_split(char *s, char c)
{
    char **answer;
    char *buffer_str;
    char **start;
    int amount;

    answer = malloc(strings_len(s, c));
    start = answer;
    while (*s)
    {
        buffer_str = *answer;
        buffer_str = malloc(string_len(s, c));
        amount = string_len(s, c);
        while (amount--)
        {
            if (*s == c)
            {
                s++;
                (*answer)++;
            }
            *buffer_str = *s;
            answer++;
        }
    }
    return answer;
}

int main()
{
    char s[20] = "1,2,3,4,5,6,7,8,9";
    char **test;

    test = ft_split(s, ',');
    printf("%c", test[0][0]);
}