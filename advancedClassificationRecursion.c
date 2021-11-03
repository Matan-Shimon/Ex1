#include "NumClass.h"
int power(int a, int b)
{
    int sum = 1;
    for (int i = 0; i < b; i++)
    {
        sum = sum * a;
    }
    return sum;
}
int isPalindromeRecursive(int zero, int number, int lenght)
{
    if (number == 0)
    {
        return zero;
    }
    else
    {
        int keep = number % 10;
        zero = zero + keep * power(10, lenght - 1);
        number = number / 10;
        lenght--;
        return isPalindromeRecursive(zero, number, lenght);
    }
}

int isPalindrome(int number)
{
    int lenght = 0;
    int temp = number;
    int number2 = 0;
    while (temp > 0)
    {
        lenght++;
        temp = temp / 10;
    }
    number2 = isPalindromeRecursive(number2, number, lenght);
    if (number2 == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int recArmstrong(int, int);
int isArmstrong(int num)
{
    int num_copy = num;
    int digits = 0;
    while (num_copy)
    {
        digits++;
        num_copy = num_copy / 10;
    }
    int check = recArmstrong(num, digits);
    if (check == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int recArmstrong(int num, int digits)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        int digit = num % 10;
        int sum = 1;
        for (int i = 0; i < digits; i++)
        {
            sum = sum * digit;
        }
        num = num / 10;
        return sum + recArmstrong(num, digits);
    }
}