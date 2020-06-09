#include <stdio.h>
 // Вариант 3
int main(){
    //   первое задание;

    int array[9] = {12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (int i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // второе задание
    int array1[2][2] = {
            {1, 1},
            {0, 1}
    };
    int array2[2][2] = {
            {2, 0},
            {3, 0}
    };
    int array3[2][2] =  {
            {0, 0},
            {0, 0}
    };
     for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 2; j++) {
             for (int k = 0; k < 2; k++)
                 array3[i][j] += array1[i][k] * array2[k][j];
         }
     }
      for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 2; j++) {
            printf("%2d ",array3[i][j]);
        }
        printf("\n");
    }

    return 0;
}