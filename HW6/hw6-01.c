/*
Составить функцию, модуль числа и привести пример ее использования. 

Данные на входе:     Целое число.
Данные на выходе:    Целое не отрицательное число.
 
Пример:   
Данные на входе:      -100
Данные на выходе:     100
*/

#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенного числа
bool getValidatedNumber(int *number)
{
    int result;
    // Ввод одного целого числа или нуля
    printf("Ввведите число:\n");
    while ((result = scanf("%d", number)) != 1)
    {
        // Очищаем входной буфер
        while (getchar() != '\n')
        {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }

        printf("Ввведите цело число. Введите снова:\n");
    }
    return true;
}

// Функция возвращения модуля числа
int absolute(int num)
{
    if (num < 0)
    {
        return -num;
    } else {
        return num;
    }
}

int main() {
    int number;
    
//getValidatedNumber(&num);

scanf("%d", &number);

printf("%d", absolute(number));
     
    return 0;
}