#include "libft.h"

int strings_len(char *s, char c)
{
    int count;

    count = 1;
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

    answer = malloc(strings_len(s, c) + 1);
    start = answer;
    i = 0;
    j = 0;
    while (*s)
    {
        answer[i] = malloc(string_len(s, c) + 1);
        while (*s != c && *s) 
        {
            printf("inner loop : %c\t", *s);
            answer[i][j] = *s;
            printf("answer[%d][%d] : %c\n", i, j, answer[i][j]);
            j++;
            s++;
        }
        answer[i][j] = '\0';
        printf("out loop : %c\n", *s);
        j = 0;
        printf("the string in function : %s\n", start[i]);
        i++;
        s++;
    }
    answer[i] = NULL;
    return answer;
}
// int main()
// {
//     char s[100] = ",,,wor,ld,hello,worel,wffe,home,9";
//     char **test;

//     test = ft_split(s, ',');
//     printf("\n%s\n", test[0]);
//     for (int i = 0; i < 9; i++)
//         printf("This array[%d] = %s\n", i, test[i]);
        
// }