#include <stdio.h>

// char name[] = "Variable";

// double big_ar[1000000];

// unsigned int counter() 
// {
    // static unsigned int cnt = 10;
    // return ++cnt;
// }
// 


// extern int global_var;

// int randint(int a, int b);

int randint(int, int);



int main() {

    // int var_main; // автоматическая локальная переменная 

    // static int var_st;
    
    // printf("var_main = %d, var_st = %d\n", var_main, var_st);


    // unsigned int times;
    // times = counter();
    // printf("times = %d\n", times);
    // printf("counter = %d\n", counter());
    //  printf("counter = %d\n", counter());
    //   printf("counter = %d\n", counter());
    //    printf("counter = %d\n", counter());

    // printf("global_var = %d\n", global_var);


    int a = 1;
    int b = 10;

    printf("%d\n", randint(a, b));
    printf("%d\n", randint(a, b));
    printf("%d\n", randint(a, b));
    printf("%d\n", randint(a, b));
    return 0;
}



/*

    section .bss - Глобальные переменные без начальных значений
    double bit_ar[1000000];





    section .data - Глобальные переменные с начальными значениями 
    char name[] = "Variable";





    section .text - Сегмент программного кода 
    _start:
    ;...

    code = main(...);

    ; завершающие действия 
    _exit[code]

*/ 