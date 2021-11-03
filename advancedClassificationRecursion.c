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
    if (num_of_digits > 1)
    {
        int first_digit = num;
        int moduling = 10;
        for (int i = 1; i < num_of_digits; i++)
        {
            first_digit = first_digit / 10;
            moduling = moduling * 10;
        }
        int last_digit = num % 10;
        if (first_digit != last_digit)
        {
            return 0;
        }
        // removing the first and last digit
        num = num % moduling; // removing first digit
        num = num % 10;       // removing last digit
        return isPalindrome(num);
    }
    else
    {
        return 1;
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