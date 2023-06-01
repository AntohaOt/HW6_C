#include <stdio.h>

int sumDigits(int *num) 
{
    // Создаем переменную "sum" для суммы чисел:
    int sum = 0;
    // Создаем цикл, который будет работать до тех пор, пока значение на которое указывает указатель "num" (простите за тавтологию) не будет равно 0:
    while (*num != 0) 
    {
        // Дополняем значение переменной "sum" последней цифрой числа на которое указывает указатель "num":
        sum += *num % 10;
        // Сокращаем значение числа на которое указывает указатель "num" на один знак:
        *num /= 10;
    }
    // Возвращаем сумму цифр числа:
    return sum;
}

// Проверка скрипта:
void main() 
{
    // Создаем переменную "num":
    int num = 123;
    // Вызываем нашу функцию и передаем ей адрес переменной "num". Результат выполнения функции записываем в переменную "sum":
    int sum = sumDigits(&num);
    // В ответ выводим полученное значение переменной "sum":
    printf("%d", sum);
}