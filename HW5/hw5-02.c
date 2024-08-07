/*
Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b. 

Данные на входе:     Два целых числа по модулю не больше 100
Данные на выходе:    Квадраты чисел от a до b
 
Пример:   
Данные на входе:      1 5
Данные на выходе:     1 4 9 16 25
*/
#include <stdio.h>
#include <stdbool.h>

// Функция проверки введенного числа
bool getValidatedNumbers(int *number1, int *number2)
{
    int result;
    // Ввод двух целых чисел менее 100, первое меньше второго
    printf("Ввведите два целых числа через пробел, первое число меньше второго, оба менее 100:\n");
    
    while ((result = scanf("%d %d", number1, number2)) != 2 || *number1 > *number2 || *number1 >= 100 || *number2 >= 100)
    {
        // Очищаем входной буфер
        while (getchar() != '\n')
        {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }

        if (result != 2) {
            printf("Введите целые числа менее 100. Введите снова:\n");
        } else if (*number1 > 100 || *number2 > 100) {
            printf("Числа должны быть менее 100. Введите снова:\n");
        } else {
            printf("Число 1 должны быть меньше числа 2. Введите снова:\n");
        }
    }
    return true;
}

int main() {
    int number1, number2;
    
//    getValidatedNumbers(&number1, &number2);

    scanf("%d %d", &number1, &number2);

    // Вывод на печатать квадратов чисел от первого введенного до второго введенного
    for (int i = number1; i <= number2; i++)
    {
        printf("%d ", i*i);

    }
     
    return 0;
}