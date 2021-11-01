#include "NumClass.h"
int isPalindrome(int num)
{
    int num_copy = num;
    int num_of_digits = 0;
    while (num_copy)
    {
        num_of_digits += 1;
        num_copy = num_copy / 10;
    }
    int arr[num_of_digits];
    for (int i = 0; i < num_of_digits; i++)
    {
        arr[i] = num % 10;
        num = num / 10;
    }
    for (int i = 0; i < num_of_digits; i++)
    {
        if (arr[i] != arr[num_of_digits - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num)
{
    int num_copy = num;
    int digits = 0;
    int sum = 0;
    while (num_copy)
    {
        digits += 1;
        num_copy = num_copy / 10;
    }
    num_copy = num;
    for (int i = 0; i < digits; i++)
    {
        int digit_times = num_copy % 10;
        int total = 1;
        for (int j = 0; j < digits; j++)
        {
            total = total * digit_times;
        }
        sum += total;
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