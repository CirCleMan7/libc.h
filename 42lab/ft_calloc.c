#include <stdio.h>
#include <stdlib.h>

char *ft_calloc(int count, int size)
{
    char *box;
    int number;
    char *start;

    number = count * size;
    box = malloc(number);
    start = box;
    while (number--)
    {
        *box = 4;
        box++;
    }
    return start;
}

int main()
{
    int *test;
    int number1 = 4;
    int number2 = 10;
    int sum = number1 * number2;
    int start;

    start = 0;
    test = calloc(number1, number2);
    while (sum--)
    {
        test[start] = 4;
        start++;
    }
    start = 0;
    while (test[start] != 0)
    {
        printf("output = %d : %d\n", test[start], start);
        start++;
    }
}