/*
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.
Данные на входе:		Два целых числа
Данные на выходе:	Одно единственное слово: Above, Less, Equal
Пример №1    
Данные на входе:		24 24
Данные на выходе:	Equal
Пример №2    
Данные на входе:      100 0
Данные на выходе:    Above
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    
    // Ввод двух целых чисел
    scanf("%d %d", &num1, &num2);
    
    // Проверка условий и вывод соответствующего результата
    if (num1 > num2)
    {
        printf("Above\n");
    }
    else if (num1 < num2)
    {
        printf("Less\n");
    }
    else
    {
        printf("Equal\n");
    }
    
    return 0;
}