/*
Ввести три числа, найти их  среднее арифметическое
Нужно напечатать среднее арифметическое чисел

Данные на входе:     Три целых целых числа через пробел
Данные на выходе:    Вещественное число в формате %.2f

Пример №1: 
Данные на входе:     4 5 7
Данные на выходе:    5.33

Пример №2:     
Данные на входе:     1 2 3
Данные на выходе:    2.00   
*/
#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;
    
    // Ввод трех целых чисел
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Нахождение среднего арифметического
    average = (num1 + num2 + num3) / 3.0;
    
    // Вывод среднего арифметического
    printf("%.2f\n", average);
    
    return 0;
}