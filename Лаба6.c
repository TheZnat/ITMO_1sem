#include <stdio.h>
#include <stdlib.h>
// вариант 14
int main() {
    // 1
    char array[5];
    array[0] = 'H';
    array[1] = 'e';
    array[2] = 'l';
    array[3] = 'l';
    array[4] = 'o';

    char* Parray = array;
    // Вывод элементов массива
    for (int i = 0; i < 5; i++) {
        printf("%c", *(Parray+i));
    }


    //2
    printf("\n");
    printf("----------------------------------------------------");
    printf("\n");

    char *Pa=array;// указатель
    Pa = (char*)malloc(5*sizeof(char));// Выделение памяти

    for ( int i = 0; i<5; i++){
            *(Pa+i)=array[i];
    }
    // Вывод элементов массива
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %c ", i, Pa[i]);
        printf("\n");
    }

    free(Pa);

    return 0;
}