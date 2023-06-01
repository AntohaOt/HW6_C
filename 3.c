#include <stdio.h>

void main() 
{
    int n, i, first = 0, second = 1, next;
    printf("Введите число n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) 
    {
        next = first + second;
        first = second;
        second = next;
    }
    printf("%d-е число Фибоначчи: %d", n, second);
}