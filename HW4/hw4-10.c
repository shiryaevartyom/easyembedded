/*
Ввести номер месяца и вывести название времени года.
Данные на входе:    	Целое число от 1 до 12 - номер месяца.
Данные на выходе:     Время года на английском: winter, spring, summer, autumn (используйте switch)
Пример №1
Данные на входе:      	4
Данные на выходе:     spring
Пример №2   
Данные на входе:      1
Данные на выходе:    winter
*/

#include <stdio.h>

int main()
{
    int month;
    
    // Ввод номера месяца
    scanf("%d", &month);
    
    // Проверка времени года по номеру месяца
    if (month == 12 || month == 1 || month == 2)
        printf("winter\n");
    else if (month >= 3 && month <= 5)
        printf("spring\n");
    else if (month >= 6 && month <= 8)
        printf("summer\n");
    else if (month >= 9 && month <= 11)
        printf("autumn\n");
    else
        printf("Неверный номер месяца\n");
    
    return 0;
}