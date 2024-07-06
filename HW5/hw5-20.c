/*
Проверить число на простоту.

Данные на входе:     Одно натуральное число.
Данные на выходе:    Если число является простым напечатать YES, иначе NO.
 
Пример:   
Данные на входе:      10, 7.
Данные на выходе:     NO, YES.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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

// Функция для проверки, является ли число простым
bool isPrime(int num)
{
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{
int num;
   
//    getValidatedNumber(&num);

    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}