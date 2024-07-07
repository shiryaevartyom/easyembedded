/*
Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
int middle(int a, int b)

Данные на входе:     Два целых не отрицательных числа.
Данные на выходе:    Одно целое число.
 
Пример:   
Данные на входе:      5 7, 10 20
Данные на выходе:     6, 15
*/

#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенных чисел
bool getValidatedNumbers(int *number1, int *number2)
{
    int result;
    // Ввод двух чисел, оба положительных
    printf("Ввведите два положуительных числа через пробел:\n");
    
    while ((result = scanf("%d %d", number1, number2)) != 2 || *number2 <= 0 || *number2 <=0)
    {
        // Очищаем входной буфер
        while (getchar() != '\n')
        {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }

         if (result != 2)
        {
            printf("Ввведите два положуительных числа через пробел: Введите снова:\n");
        }
        else
        {
            printf("Оба числа должны быть положительными. Введите снова:\n");
        }
    }
    return true;
}

// Функция нахождения средне арифмитического
int middle(int a, int b)
{
    int result;
    result = (a+b)/2;
    return result;
}

int main() {
    int number1, number2;
    
//getValidatedNumbers(&number1, &number2);

scanf("%d %d", &number1, &number2);

printf("%d", middle(number1, number2));
     
    return 0;
}