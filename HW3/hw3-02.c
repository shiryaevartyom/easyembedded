/*
Ввести три числа, найти их сумму и произведение
Нужно напечатать сумму и произведение трех чисел

Данные на входе:       Три целых числа через пробел
Данные на выходе:      %d+%d+%d=%d
                       %d*%d*%d=%d 

Пример №1: 
Данные на входе:        1 2 3
Данные на выходе:     1+2+3=6
                      1*2*3=6

Пример №2:     
Данные на входе:        4 5 7
Данные на выходе:     4+5+7=16
                      4*5*7=140
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Ввод трех целых чисел
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Нахождение суммы трех чисел
    int sum = num1 + num2 + num3;
    int mult = num1 * num2 * num3;
    
    // Вывод суммы
    printf("%d+%d+%d=%d\n", num1, num2, num3, sum);
    printf("%d*%d*%d=%d\n", num1, num2, num3, mult);
    
    return 0;
}