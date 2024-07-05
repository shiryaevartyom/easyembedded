/*
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д. 

Данные на входе:     Одно целое не отрицательное число. 
Данные на выходе:    Перевернутое число
 
Пример:   
Данные на входе:      1234 782
Данные на выходе:     4321 287
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

// Функция для вывода массива
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int number, numDigits;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
//    Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);
    if (numDigits > 1) // если порадков в числе более 1-го
    {    
        printArray(digits, numDigits);
    }
    else
    {
        printf("%d", number);
    }

    return 0;
}