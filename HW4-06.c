/*

На вход подается произвольное трехзначное число, напечать сумму цифр

Данные на входе: На вход подается произвольное трехзначное число, напечать сумму цифр
Данные на выходе: Одно целое число

Данные на входе: 435
Данные на выходе: 12

Данные на входе: 100
Данные на выходе: 1
*/

#include <stdio.h>

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

int main()
{
    int number, numDigits, sum=0;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
    // Ввод целого положительного числа
    scanf("%d", &number);
    
    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);
    
    // Вывод цифр массива
    for (int i = numDigits - 1; i >= 0; i--)
    {
        sum=sum+digits[i];
    }
    
    // Вывод суммы
    printf("%d\n", sum);
    
    return 0;
}