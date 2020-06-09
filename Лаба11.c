#include <stdio.h>
#include "parallelogram.h"
int main() {
    struct coordinate paral;
    printf("Add first coords: ");
    scanf("%f %f", &paral.x1, &paral.y1);
    printf("Add second coords: ");
    scanf("%f %f", &paral.x2, &paral.y2);
    printf("Add third coords: ");
    scanf("%f %f", &paral.x3, &paral.y3);
    printf("Perimeter: %f\n", Perimeter(paral));
    printf("Area: %f\n",  Area(paral));
    return 0;
}


 /*include "stdio.h"
#include "parallelogram.h"
int main() {

    struct coordinate paral;
    printf("Add first coords :  ");
    scanf("%f %f", &paral.x1, &paral.y1);
    printf("Add second coords : ");
    scanf("%f %f", &paral.x2, &paral.y2);
    printf("Add third coords : ");
    scanf("%f %f", &paral.x3, &paral.y3);

    printf("Perimeter: %f\n", Perimeter (paral));
    printf("Area: %f\n",  Area (paral));

    return 0;
}*/