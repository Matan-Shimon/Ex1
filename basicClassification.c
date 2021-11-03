#include "NumClass.h"
int isStrong(int num)
{
    int sum = 0;
    int digit;
    int num_copy = num;
    while (num_copy)
    {
        digit = num_copy % 10;
        int factorial = 1;
        for (int i = 2; i <= digit; i++)
        {
            factorial = factorial * i;
        }
        sum += factorial;
        num_copy = num_copy / 10;
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}