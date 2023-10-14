#include "libft.h"

int intlen(int num)
{
    int count;

    count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int ten(int num, int amount)
{
    int ten;

    ten = 1;
    while (num > 0 && amount--)
        ten *= 10;
    return ten;
}

int fontnum(int num, int amount)
{
    while (num > 0 && amount--)
        num /= 10;
    return num + 48;
}

char *ft_itoa(int n)
{
    int amount;
    char *answer;
    char *start;

    answer = malloc(intlen(n));
    amount = intlen(n);
    start = answer;
    while (amount--)
    {
        *answer = fontnum(n, amount);
        answer++;
        n %= ten(n, amount);
    }
    return start;
}