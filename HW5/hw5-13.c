/*
Посчитать количество четных и нечетных цифр числа. 

Данные на входе:     Одно целое не отрицательное число. 
Данные на выходе:    Два числа через пробел. Количество четных и нечетных цифр в числе. 
 
Пример:   
Данные на входе:      1234, 787.
Данные на выходе:     2 2, 1 2.
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
    int number, numDigits, even = 0, odd = 0;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
//    Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);

    for (int i = 0; i < numDigits; i++)
    {
    if ( digits[i] % 2 == 0)
        {
            even++;
        }
    else
    {
        odd++;
    }
    }
    printf("%d %d", even, odd);


    return 0;
}