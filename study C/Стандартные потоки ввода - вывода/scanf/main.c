/* Спецификаторы преобразования для scanf

    1. %d - Целое число со знаком в десятичной форме. (Приводится к типу int).
    2. %i - Целое число в десятичной, шестнадцатеричной или восьмеричной системах. (Приводится к типу int).
    3. %u - Целое беззнаковое (unsigned) число в десятичной форме. (Приводится к типу unsigned int).
    4. %o - Целое число в восьмеричной форме. (Приводится к типу int).
    5. %x, %X - Целое число в шестнадцатеричной форме. (Приводится к типу int).
    6. %f, %e, %g, %F, %E, %G - Вещественное число. (Приводится к типу float).
    7. %c - Символ в соответствии с текущей кодовой таблицей. (Приводится к типу char).
    8. %s - Строка(последовательность символов). Читается до первого пробела, перевода строки 
    или символа табуляции.

*/ 


/* Модификаторы

    1. h - %hd, %hi - для short int;  
    %hx, %ho, %hu - для unsigned short.
    
    2. hh - %hhd - для signed char; 
    %hhu - для unsigned char.

    3. l - %ld, %li - для long int; 
    %hx, %ho, %hu - для unsigned long;
    %lf, %lg, %Le - для double.

    4. L - %Lf, %Lg, %Le - для long double; 

    ll (В стандарте C99) - %lld - для long long int;
    %llu - для unsigned long long.

    5. Цифры - Максимальная ширина ввода (либо достигается максимальная ширина, либо служебный символ).

    6. * - Пропуск данных.
*/ 

#include <stdio.h>

int main() {
    // long long var_lli = 0;
    // double var_d = 0;


    // int res = scanf("%lld %lf",&var_lli, &var_d);

    // printf("res = %d, var_lli = %lld, var_d = %.2lf\n", res, var_lli, var_d);

    unsigned int price = 0;
    double weight = 0.0;

    int res = scanf("%*llu; %u; %lf", &price, &weight);
    printf("res = %d \t price = %d \t weight = %.2f\n", res, price, weight);
    
    return 0;
} 