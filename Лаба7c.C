// лаба 7 варант 14
#include <stdio.h>
#include <math.h>

enum typeofcar {car = 1, truck, bus, racing }; // создаем перечисление

struct square{
    int x1, y1, x2, y2;
} Squ;

union{
    unsigned short X;
    struct lp { // создаем стукутру
        unsigned short ready : 1, littleToner : 1, damaged : 1, drum : 1 , NoPaper : 1;// битовое поле
    } lp; // выделяем память под структурные переменные
} laserPrinter;

int main() {
    // 1 задание
    enum typeofcar number; // создаем переменную number с перечислимым типом typeofcar
    number = bus; // присваиваем переменной number константу bus
    printf("%d\n", number);
    // 2 задание
    Squ.x1 = 2; // координаты
    Squ.y1 = 2;
    Squ.x2 = 4;
    Squ.y2 = 4;
    printf("Square = %f\n", pow((Squ.x2 - Squ.x1), 2) + pow((Squ.y2 - Squ.y1), 2)); /* по формуле длинны отезков
 находим сторону квадрата и возводим ее в квадрат - это и будет его плащадь  */

    // 3 задание
    scanf ("%x", &laserPrinter.X);
    // проверка условия
    laserPrinter.lp.ready ? printf( "ready on\n") : printf("ready off\n");
    laserPrinter.lp.littleToner ? printf("printf on\n") : printf("printf off\n");
    laserPrinter.lp.damaged ? printf( "damaged on\n") : printf("damaged off\n");
    laserPrinter.lp.drum ? printf("drum on\n") : printf("drum off\n");
    laserPrinter.lp.NoPaper ? printf ("NoPaper on\n") : printf ("NoPaper off\n");
    return 0;
}
