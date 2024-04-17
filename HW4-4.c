/*
Ввести пять чисел и  вывести наибольшее из них 
Нужно напечатать наибольшее число

Данные на входе:       Пять целых чисел разделенных пробелом
Данные на выходе:    Одно целое число
   
Данные на входе:        4    15    9    56    4
Данные на выходе:     56
*/

#include <stdio.h>

int main()
{
    int num[4];
    int max=0;
    
    // Ввод пяти целых чисел
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &num[i]);
    }

    // Ищем максимальное число
    for (int i = 0; i < 5; ++i)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    
    // Вывод максимального
    printf("%d\n", max);
    
    return 0;
}