#include <stdio.h>
#include <math.h>

 
int main() {

    double a, b, c;
    double D, x1, x2;

    if(scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {
        printf("Error input\n");
        return 0;
    }

    D = b*b - 4*a*c;

    if(D < 0) {
        printf("D = %.2f < 0", D);
        return 0;
    }

    D = sqrt(D);
    x1 = -(a + D) / (2.0 * a);
    x2 = -(b - D) / (2.0 * a);

    printf("x1 = %.2f \t x2 = %.2f\n", x1, x2);

    return 0;
}

/* Математические функции (math.h)

    1.ФУНКЦИЯ:

    1. int abs(int) - Вычисление модуля целочисленного значения.
    
    2. double fabs(double) - Вычисление модуля вещественного значения.

    
    2. ФУНКЦИЯ ОКРУГЛЕНИЯ:

    1. double round(double) - Округление вещественного значения до ближайшего целого.

    2. double floor(double) - Округление вещественного значения до наименьшего целого.

    3. double ceil(double) - Округление вещественного значения до наибольшего целого.
    
    4. double trunc(double) - Отбрасывание дробной части вещественного числа.


    3. СТЕПЕННЫЕ ФУНКЦИИ:

    1. double sqrt(double) - Вычисление квадратного корня от вещественного значения.

    2. double cbrt(double) - Вычисление кубического корня от вещественного значения.

    3. double pow(double x, double y) - Возвращение числа х в степени у.

    4. double exp(double) - Вычисление экспоненты от вещественного значения.

    5. double log(double) - Вычисление натурального логарифма.

    6. double log2(double) - Вычисление логарифма по основанию 2.

    7. double log10(double) - Вычисление десятичного логарифма.


    4. ТРИГОНОМЕТРИЧЕСКИЕ ФУНКЦИИ: 

    1. double sin(double) - Вычисление синуса угла, заданного в радианах.
    
    2. double cos(double) - Вычисление косинуса угла, заданного в радианах.

    3. double tan(double) - Вычисление тангенса угла, заданного в радианах.

    4. double asin(double) - Вычисление арксинуса угла (возвращает радианы).

    5. double acos(double) - Вычисление арккосинуса угла (возвращает радианы).

    6. double atan(double) - Вычисление арктангенса угла (возвращает радианы). 

*/ 