/*
Организовать ввод натурального числа с клавиатуры.
Программа должна определить наименьшую и наибольшую цифры,
которые входят в состав данного натурального числа. 

Данные на входе:     Одно целое не отрицательное число. 
Данные на выходе:    Две цифры через пробел. Сначала наименьшая цифра числа, затем наибольшая.
 
Пример:   
Данные на входе:      15, 2457, 22.
Данные на выходе:     1 5, 2 7, 2 2.
*/

#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенного числа
bool getValidatedNumber(int *number) {
    int result;
    // Ввод одного целого числа или нуля
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


// Функция для разложения числа на цифры и сохранения их в массиве
void decomposeNumber(int number, int digits[], int *numDigits)
{
    int index = 0;
    
    // Пока число больше нуля
    while (number > 0)
    {
        // Получаем последнюю цифру числа
        digits[index] = number % 10;
        // Уменьшаем число на один разряд, удаляя последнюю цифру
        number /= 10;
        // Увеличиваем индекс для сохранения следующей цифры в массиве
        index++;
    }
    
    // Сохраняем количество цифр
    *numDigits = index;
}

int main() {
    int number, numDigits, min = 0, max = 0;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
//    Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);
    if (numDigits > 1) // если порадков в числе более 1-го
    {    
        min = digits[0];
        max = digits[0];
        for (int i = 0; i < numDigits; i++)
        {
        if ( digits[i] < min )
            {
                min = digits[i];
            }
        if ( digits[i] > max )
            {
                max = digits[i];
            }

        }
        printf("%d %d", min, max);
    }
    else
    {
        printf("%d %d", number, number);
    }

    return 0;
}