/*
Дан текст состоящий из английских букв и цифр, заканчивается символом «.»
Перевести все заглавные английские буквы в строчные.

Данные на входе:     Текст из маленьких, больших английских букв и пробелов. В конце текста символ точка.
Данные на выходе:    Текст из маленьких английских букв.
 
Пример:   
Данные на входе:      HELLO wORld.
Данные на выходе:     hello world
*/

#include <stdio.h>
#include <ctype.h>

int main()
{

char input[1000];
char result[1000];
int i = 0;

// Ввод текста
fgets(input, sizeof(input), stdin);

// Обработка текста до первой точки
while (input[i] != '.' && input[i] != '\0')
{
    result[i] = input[i];
    i++;
}
result[i] = '\0'; // Завершаем строку нулевым символом

// Перевод всех букв из верхнего регистра в нижний
for (int i = 0; result[i] != '\0'; i++)
{
    result[i] = tolower(result[i]);
}

printf("%s", result);

return 0;
}