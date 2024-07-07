/*
Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.

Данные на входе:     Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0.
Данные на выходе:    Одно целое число.
 
Пример:   
Данные на входе:      8 3, -5 2
Данные на выходе:     512, 25
*/

#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенных чисел
bool getValidatedNumbers(int *number1, int *number2)
{
    int result;
    // Ввод двух чисел, второе положительное
    printf("Ввведите два числа через пробел, второе число степень - положительное:\n");
    
    while ((result = scanf("%d %d", number1, number2)) != 2 || *number2 <= 0)
    {
        // Очищаем входной буфер
        while (getchar() != '\n')
        {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }

         if (result != 2)
        {
            printf("Ввведите два числа через пробел, второе число степень - положительное: Введите снова:\n");
        }
        else
        {
            printf("Второе число должны быть положительное. Введите снова:\n");
        }
    }
    return true;
}

// Функция возведения в степень
int power(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    int number1, number2;
    
//getValidatedNumbers(&number1, &number2);

scanf("%d %d", &number1, &number2);

printf("%d", power(number1, number2));
     
    return 0;
}