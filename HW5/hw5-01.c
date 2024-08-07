/*
Ввести натуральное число
Вывести квадраты и кубы всех чисел от 1 до этого числа.
Число не превосходит 100.

Данные на входе:     Одно целое число не превосходящее 100 
Данные на выходе:    Для каждого из чисел от 1 до введенного числа напечатать квадрат числа и его куб.
 
Пример:   
Данные на входе:      5
Данные на выходе:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
*/
#include <stdio.h>

int main() {
    int number, result;
    
/*    // Ввод целого чисела менее 100
    printf("Ввведите одно целое число не превосходящее 100:\n");
    
    while ((result = scanf("%d", &number)) != 1 || number >= 100)
    {
        // Очищаем входной буфер
        while (getchar() != '\n') {
            // Ничего не делаем, просто пропускаем оставшиеся символы
        }
        if (result != 1) {
            printf("Введите целое число менее 100. Введите снова:\n");
        } else {
            printf("Число должно быть менее 100. Введите снова:\n");
        }
    }
*/
    scanf("%d", &number);

    // Вывод на печатать квадрат числа и куб каждого числа от 1 до введенного
    for (int i = 1; i <= number; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);

    }
     
    return 0;
}