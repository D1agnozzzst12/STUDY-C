#include <iostream>

// Перегрузка функции


int module(int x)
{
    return (x < 0) ? -x : x;
}

double modul(double x)
{
    return (x < 0) ? -x : x;
}


// Функции с параметрами по умолчанию

void show_args(short a = 10, double b = 20.0, int c = 30)
{
    printf("a = %d, b = %.2f, c = %d\n", a, b, c);
}


int main(void) 
{
    int a1 = modul(-3);
    int a2 = modul(-3.5);
    double a3 = modul(-3);
    double a4 = modul(-3.5);




    show_args();
    show_args(1);
    show_args(1, 2);
    show_args(1, 2, 3); 
}