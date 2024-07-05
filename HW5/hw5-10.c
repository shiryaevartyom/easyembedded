/*
Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.

Данные на входе:     Одно целое число. 
Данные на выходе:    Единственное слов: YES или NO
 
Пример:   
Данные на входе:      1238 1274 0
Данные на выходе:     YES NO YES
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
    int number, numDigits, count = 0;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
    // Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);
    

    if (numDigits > 1) // если порадков в числе более 1-го
    {
        // Проверка возрастания порядков в числе
        for (int i = 0; i < numDigits-1; i++)
        {
            if (digits[i] > digits[i+1])
            {
            count++;    
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("YES\n");
        return 0;
    }
    
    if (count == numDigits-1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
//    printf("%d", numDigits);

    return 0;
}