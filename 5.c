#include <stdio.h>

int ispolnitel(int num) {
    int first = num / 100;
    int second = (num / 10) % 10;
    int third = num % 10;
    int product1 = first * second;
    int product2 = second * third;
    int result = product1 * 100 + product2;
    return result;
}

int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    int newNum = ispolnitel(num);
    printf("The result is: %d\n", newNum);
    return 0;
}