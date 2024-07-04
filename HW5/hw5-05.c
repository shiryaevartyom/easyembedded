/*
Ввести целое число и найти сумму его цифр.

Данные на входе:     Одно целое число большее или равное нулю. 
Данные на выходе:    Одно число - сумма цифр
 
Пример:   
Данные на входе:      1234
Данные на выходе:     10
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
    int number, numDigits, sum=0;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
    // Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);
    
    // Подсчет суммы разрядов в числе
    for (int i = numDigits - 1; i >= 0; i--)
    {
        sum=sum+digits[i];
    }
    
    // Вывод суммы
    printf("%d\n", sum);

    return 0;
}