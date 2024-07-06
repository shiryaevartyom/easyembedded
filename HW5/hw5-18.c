/*
Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
Числа Фибоначчи – это элементы числовой последовательности 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …,
В которой каждое последующее число равно сумме двух предыдущих.

Данные на входе:     Одно натуральное число.
Данные на выходе:    Ряд чисел Фибоначчи через пробел.
 
Пример:   
Данные на входе:      5, 10.
Данные на выходе:     1 1 2 3 5, 1 1 2 3 5 8 13 21 34 55.
*/

#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенного числа
bool getValidatedNumber(int *number)
{
    int result;
    // Ввод одного целого числа или нуля
    printf("Ввведите цело число, больше 10:\n");
    while ((result = scanf("%d", number)) != 1 && *number < 10)
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

int main()
{
int num;
unsigned long long int first = 0, second = 1, next; // Объявление переменных для чисел Фибоначчи
   
//    getValidatedNumber(&num);

    scanf("%d", &num);

    // Вывод первых чисел Фибоначчи
    if (num == 1) printf("%llu ", second);
    if (num >= 2) printf("%llu ", second);

    for (int i = 3; i <= num+1; i++)
    {
        next = first + second;
        printf("%llu ", next);
        first = second;
        second = next;
    }

    return 0;
}