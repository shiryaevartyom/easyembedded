/*
Ввести целое число и определить, верно ли, что в его записи есть  две одинаковые цифры, НЕ обязательно стоящие рядом.

Данные на входе:     Одно целое число. 
Данные на выходе:    Единственное слов: YES или NO
 
Пример:   
Данные на входе:      1234 1242
Данные на выходе:     NO YES
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
    int number, numDigits;
    bool check = false;
    int digits[10]; // Максимальное количество цифр в десятичном числе - 10
    
    // Ввод целого числа
//    getValidatedNumber(&number);

    scanf("%d", &number);

    // Разложение числа на цифры
    decomposeNumber(number, digits, &numDigits);
    
    // Проверка есть ли совподающие цифры
    for (int i = 0; i < numDigits; i++)
    {
        for(int j=i+1; j < numDigits; j++)
            {
                if ( digits[i] == digits[j] )
                {
                check = true;
                break;
                }
            }
    }
    
    if (check == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}