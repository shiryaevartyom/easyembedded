/*
Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.

Данные на входе:    	Три целых числа
Данные на выходе:     Одно слово YES или NO

Пример
Данные на входе:     	4 5 17
Данные на выходе:     YES
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    // Ввод трех целых чисел
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Проверка на упорядоченность чисел
    if (num1 < num2 && num2 < num3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}