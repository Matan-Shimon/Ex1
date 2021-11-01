#include <stdio.h>
#include "NumClass.h"
int main()
{
    int num1;
    scanf("%d", &num1);
    int num2;
    scanf("%d", &num2);
    int min;
    int max;
    if (num1 < num2)
    {
        min = num1;
        max = num2;
    }
    else
    {
        min = num2;
        max = num1;
    }
    for (int i = min; i <= max; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf("%d", i);
            if (i != max)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf("%d", i);
            if (i != max)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    for (int i = min; i <= max; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d", i);
            if (i != max)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
    for (int i = min; i <= max; i++)
    {
        if (isStrong(i) == 1)
        {
            printf("%d", i);
            if (i != max)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
}