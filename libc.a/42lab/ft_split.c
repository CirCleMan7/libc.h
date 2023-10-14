#include <stdio.h>
#include <stdlib.h>

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
    char *buffer_str;
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

int main()
{
    char s[100] = "Hel,lo,wor,ld,5,6,7,8,9";
    char **test;

    test = ft_split(s, ',');
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("This array[%d][%d] = %c\n", i, j, test[i][j]);
        }
        
}