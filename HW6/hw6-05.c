/*
Составить функцию, которая определяет сумму всех чисел от 1 до N
и привести пример ее использования. 

Данные на входе:     Одно целое положительное число N.
Данные на выходе:    Целое число - сумма чисел от 1 до N.
 
Пример:   
Данные на входе:      100
Данные на выходе:     5050
*/

#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенных чисел
bool getValidatedNumber(int *number)
{
    int result;
    // Ввод двух чисел, оба положительных
    printf("Ввведите одно положительное число:\n");
    
    while ((result = scanf("%d", number)) != 1 || *number <= 0)
    {
        // Очищаем входной буфер
        while (getchar() != '\n')
        {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }

         if (result != 1)
        {
            printf("Ввведите одно положительное число. Введите снова:\n");
        }
        else
        {
            printf("Число должны быть положительными. Введите снова:\n");
        }
    }
    return true;
}

// Функция нахождения суммы чисел
int sum(int a)
{
    int result = 0;
    for (int i = 0; i <= a; i++ )
    {
        result = result + i;
    }
    return result;
}

int main()
{

int number=0;
    
//getValidatedNumber(&number);

scanf("%d", &number);

printf("%d", sum(number));
     
return 0;
}