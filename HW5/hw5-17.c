/*
Ввести натуральное число и напечатать все числа от 10 до введенного числа
у которых сумма цифр равна произведению цифр.

Данные на входе:     Одно натуральное число большее 10.
Данные на выходе:    Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания.
                     Не превосходящие введенное число.
 
Пример:   
Данные на входе:      200, 1000.
Данные на выходе:     22 123 132, 22 123 132 213 231 312 321.
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

        if (result != 1)
        {
            printf("Ввведите цело число, больше 10. Введите снова:\n");
        }
        else
        {
            printf("Число должны быть больше 10. Введите снова:\n");
        }
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

// Функция для вычисления произведения цифр числа
int productOfDigits(int num)
{
    int product = 1;
    while (num != 0)
    {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main()
{
    int num;
   
//    getValidatedNumber(&num);

    scanf("%d", &num);

    for (int i = 10; i <= num; i++)
    {
        if (sumOfDigits(i) == productOfDigits(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}