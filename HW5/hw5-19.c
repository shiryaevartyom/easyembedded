/*
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.

Данные на входе:     Одно натуральное число.
Данные на выходе:    YES или NO
 
Пример:   
Данные на входе:      1234, 1233.
Данные на выходе:     YES, NO.
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

// Функция для вычисления суммы цифр числа
int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
int num;
   
//    getValidatedNumber(&num);

    scanf("%d", &num);

    if (sumOfDigits(num) == 10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}