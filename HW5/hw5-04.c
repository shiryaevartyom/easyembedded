/*
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Данные на входе:     Целое положительное число
Данные на выходе:    Одно слов: YES или NO
 
Пример:   
Данные на входе:      123
Данные на выходе:     YES
Данные на входе:      1234
Данные на выходе:     No

*/
#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенного числа
bool getValidatedNumber(int *number) {
    int result;
    // Ввод одного целого числа
    printf("Ввведите цело число:\n");
    while ((result = scanf("%d", number)) != 1) {
        // Очищаем входной буфер
        while (getchar() != '\n') {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }
        printf("Неверный ввод. Пожалуйста, введите целое число: ");
    }
    return true;
}


// Функция для подсчет количества цифр в числе
void decomposeNumber(int number, int *numDigits)
{
    int index = 0;
    
    // Пока число больше нуля
    while (number > 0)
    {
        // Уменьшаем число на один разряд, удаляя последнюю цифру
        number /= 10;
        // Увеличиваем индекс для подсчета количества цифр
        index++;
    }
    
    // Сохраняем количество цифр
    *numDigits = index;
}

int main() {
    int number, numDigits;
    
    // Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Подсчет количества цифр в числе
    decomposeNumber(number, &numDigits);
    
    if (numDigits == 3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}