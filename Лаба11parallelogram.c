#include "parallelogram.h"

float Perimeter (struct coordinate paral){
    float P = 2 * (sqrt(pow((paral.x3-paral.x2),2) +pow((paral.y3-paral.y3),2)) +
                    sqrt(pow((paral.x2-paral.x1),2) + pow((paral.y2-paral.y1),2)));
    return P;
}
float Area (struct coordinate paral){
    float a = (sqrt(pow((paral.x3-paral.x2),2) + pow((paral.y3-paral.y3),2)));
    float b = sqrt(pow((paral.x2-paral.x1),2) + pow((paral.y2-paral.y1),2));
    float d = sqrt(pow((paral.x3 - paral.x1),2) + pow((paral.y3 - paral.y2),2));
    float Cosab = pow (a, 2) +pow(b,2)- pow(d ,2) / 2 * a * b;
    float S = a * b * Cosab;
    return S;
}