/*
Дана последовательность ненулевых целых чисел, в конце последовательности число 0.
Посчитать количество чисел. 

Данные на входе:     Целые ненулевые числа. В конце последовательности ноль. Ноль в последовательность не входит.
Данные на выходе:    Одно целое число - количество четных чисел.
 
Пример:   
Данные на входе:      15 22 2 4 1 6 0
Данные на выходе:     6
*/

#include <stdio.h>

#define MAX_SIZE 1000 // Максимальный размер массива


int main()
{
    int arr[MAX_SIZE];
    int count = 0, even_count = 0;
    int number;

    
    while (1)
    {
        scanf("%d", &number);
        if (number == 0)
        {
            break;
        }
        else if (number % 2 == 0)
        {
            even_count++;
        }
        
        arr[count++] = number; // Сохраняем число в массив и увеличиваем размер
    }


    printf("%d", even_count);

    return 0;
}