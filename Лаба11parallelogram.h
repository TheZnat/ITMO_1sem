#ifndef PROG11_PARALLELOGRAM_H
#define PROG11_PARALLELOGRAM_H
#include <math.h>

struct coordinate {
    float x1, y1;
    float x2, y2;
    float x3 , y3;
} paral;

float Perimeter (struct coordinate paral);
float Area (struct coordinate paral);

#endif //PROG11_PARALLELOGRAM_H