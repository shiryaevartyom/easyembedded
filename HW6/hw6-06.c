/*
Когда создатель шахмат, древнеиндийский мудрец и математик Сисса бен Дахир, показал своё изобретение Правителю страны,
тому так понравилась игра, что он позволил изобретателю право самому выбрать награду.
Мудрец попросил у Повелителя за первую клетку шахматной доски заплатить ему одно зерно риса, за второе — два,
за третье — четыре и т. д., удваивая количество зёрен на каждой следующей клетке.
Помоги повелителю сосчитать сколько зерен на какой клетке лежит.
Необходимо составить функцию, которая определяет, сколько зерен попросил положить на N-ую клетку изобретатель шахмат
(на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …) 

Данные на входе:     Цлое число от 1 до 64.
Данные на выходе:    Одно целое число. Количество зерен на данной клетке.
 
Пример:   
Данные на входе:      3, 28
Данные на выходе:     4, 134217728
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Функция проверки введенных чисел
bool getValidatedNumber(int *number)
{
    int result;
    // Ввод двух чисел, оба положительных
    printf("Ввведите число от 1 до 64:\n");
    
    while ((result = scanf("%d", number)) != 1 || *number >= 64 || *number <= 1)
    {
        // Очищаем входной буфер
        while (getchar() != '\n')
        {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }

         if (result != 1)
        {
            printf("введите число от 1 до 64. Введите снова:\n");
        }
        else
        {
            printf("Число должны быть от 1 до 64. Введите снова:\n");
        }
    }
    return true;
}

int main()
{

int number;
unsigned long long result = 1;
    
//getValidatedNumber(&number);

scanf("%d", &number);

for (int i = 0; i < number-1; i++)
{
    result *= 2;
}

printf("%llu", result);

return 0;
}