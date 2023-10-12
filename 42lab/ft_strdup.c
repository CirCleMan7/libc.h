#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strlen.c"

int ft_strlen(char *str);

char *ft_strdup(char *orginal)
{
    char    *start;
    char    *copy;
    int amount;

    amount = ft_strlen(orginal);
    copy = malloc(amount);
    start = copy;
    while (amount--)
    {
        *copy = *orginal;
        copy++;
        orginal++;
    }
    return start;
}

int main()
{
    char    a[100] = "Hello World\0\0\0\0\0 Hell llll oo";
    char    *b;

    b = ft_strdup(a); 
    int amount = 29;
    while (amount--)
    {
        printf("word : %c : %d\n", *b, amount);
        b++;
    }
}