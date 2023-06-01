#include <stdio.h>

int sumDigits(int *num) 
{
    int sum = 0;
    while (*num != 0) 
    {
        sum += *num % 10;
        *num /= 10;
    }
    return sum;
}

void main() 
{
    int num = 12345;
    int sum = sumDigits(&num);
    printf("Sum of digits: %d\n", sum);
}