#include <stdio.h>

int ispolnitel(int num) 
{
    // Создаем переменную "first" и присваиваем ей значение первой цифры числа "num":
    int first = num / 100;
    // Создаем переменную "second" и присваиваем ей значение второй цифры числа "num":
    int second = (num / 10) % 10;
    // Создаем переменную "third" и присваиваем ей значение третьей цифры числа "num":
    int third = num % 10;
    // Создаем переменную "result1" и присваиваем ей значение произведения первой и второй цифр:
    int result1 = first * second;
    // Создаем переменную "result2" и присваиваем ей значение произведения второй и третьей цифр:
    int result2 = second * third;
    // Создаем переменную "FinalResult" и присваиваем ей значение, которое получилось из произведений "result1" и "result2":
    int FinalResult = result1 * 100 + result2;
    // Создаем условие, которое будет менять порядок, если "result1" < "result2":
    if (result1 < result2) 
    {
        FinalResult = result2 * 100 + result1;
    }
    // Возвращаем полученное значение переменной "FinalResult":
    return FinalResult;
}

// Проверка скрипта:
void main() 
{
    // Создаем переменную "num" c трехзначным числом:
    int num = 123;
    // Вызываем нашу функцию с аргументом "num". Результат выполнения функции записываем в переменную "RemakeNum":
    int RemakeNum = ispolnitel(num);
    // Выводим получившиеся число:
    printf("Получившиеся число: %d\n", RemakeNum);
}