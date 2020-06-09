#include <stdio.h>
#include <string.h>
// вариант 14
int main() {
    // задание 1
    printf("задание 1\n");
    char first[12] = "flash",second[] ="hlight";
    printf("%s + %s = ",first,second);
    strcat(first,second);
    printf("%s\n",first);

    // задание 4
    printf("задание 2\n");
    printf("Введите первые сколько символов, которые вы хотите сравнить: ");
    int ppr=0,n;
    scanf ("%d", &n);
    char *str1 = "aaabb", *str2 = "bbbbcc", *str3="ccccafrr";
    ppr = strncmp(str2,str1,n);
    (ppr > 0)? printf("строка2  больше строки1\n"):printf("строка2 меньше строки1\n");
    ppr = strncmp(str2,str3,n);
    (ppr > 0)? printf("строка2 больше чем строка3\n"): printf("строка2 меньше чем строка3\n");

    // задание 7;
    printf("задание 3\n");
    char str []="hello";
    //Определение длины строки и вывод результата на консоль
    printf ("Длина строки «%s» - %lu символов\n", str, strlen (str));

    // задание 10
    printf("задание 4\n");
    char string1 []= "0123456789"; // Массив со строкой для поиска
    char string2 []= "369";   // Набор символов, которые должны входить в искомый сегмент
    char * isym = strpbrk (string1, string2);//Поиск символов
    if ( isym == 0) {
        printf("Символы не найдены\n");
    }
    else {
        printf("Искомый символ на позиции %ld\n",isym - string1 + 1); // Порядковый номер первого найденного символа (начиная с 1) выводится на консоль
    }
    //задание 12
    printf ("задание 5\n");
    char strin1[] = "0123456789";
    char strin2[] = "79";
    printf ("%lu \n", sizeof(strin1) - (strspn(strin2, strin1)+1));// Определяем длину не содержащего символы
    return 0;
}