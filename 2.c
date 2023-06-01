#include <stdio.h>
#include <string.h>

char* join(char* words[], int n)
{
    char* result = (char*)malloc(sizeof(char) * 255); // выделяем память для результатирующей строки

    // обнуляем память
    memset(result, 0, sizeof(char) * 255);

    for (int i=0; i<n; i++)
    {
        strcat(result, words[i]); // склеиваем текущую строку с результатом
        if (i != n-1) // если не последняя строка, то добавляем пробел
            strcat(result, " ");
    }
    return result;
}

int main()
{
    char* arr[] = {"Hello", "world", "from", "OpenAI", "API"};
    char* res = join(arr, 5);

    printf("Result: %s\n", res);

    free(res);
    return 0;
}