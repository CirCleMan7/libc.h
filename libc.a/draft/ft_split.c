#include "libft.h"

int strings_len(char *s, char c)
{
    int count;

    count = 0;
    while (*s)
    {
        if (*s == c)
            count++;
        s++;
    }
    printf("strings_len = %d\n", count);
    return count;
}

int string_len(char *s, char c)
{
    int count;

    count = 0;
    while (*s && *s != c)
    {
        s++;
        count++;
    }
    printf("string_len = %d\n", count);
    return count;
}

char **ft_split(char *s, char c)
{
    char **answer;
    char **start;
    int j;
    int i;

    answer = malloc(strings_len(s, c));
    start = answer;
    i = 0;
    j = 0;
    while (*s)
    {
        answer[i] = malloc(string_len(s, c));
        while (*s != c && *s) 
        {
            answer[i][j] = *s;
            j++;
            s++;
        }
        j = 0;
        i++;
        s++;
    }
    return answer;
}
