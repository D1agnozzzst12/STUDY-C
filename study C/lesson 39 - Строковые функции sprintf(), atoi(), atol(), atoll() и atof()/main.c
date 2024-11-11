#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    // sprintf()

    // int sprintf(char *buffer, const char *format,...);

    // double width = 2.4, height = 0.76, depth = 3.14;

    // char info[100];
    // const char format[] = "(%.2f x %.2f x %.2f)";

    // sprintf(info, format, width, height, depth);

    // puts(info);



    // double width = 2.4, height = 0.76, depth = 3.14;
    // char name[] = "Chair";
    // char info[100]; 
    // const char format[] = "(%s: %.2f x %.2f x %.2f)";

    // sprintf(info, format, name, width, height, depth);
    // puts(info);




    // double width = 2.4, height = 0.76, depth = 3.14;
    // char name[] = "Chair";
    // const size_t size = strlen(name) + 100;
    // char *info = malloc(size);
    // const char format[] = "(%s: %.2f x %.2f x %.2f)";

    // sprintf(info, format, name, width, height, depth);
    // puts(info);

    // free(info); 






    // sprintf() Преобразование чисел в символы


    // int var_i = -123;
    // double var_d = 35.2323;
    // char str_var[10];

    // sprintf(str_var, "%.2f", var_d);
    // puts(str_var);








    // Функции atoi(), atol(), atoll(), atof()

    // stdlib

    // 1. int atoi(const char *str);

    // 2. long atol(const char *str);

    // 3. long long atoll(const char *str);

    // 4. double atof(const char *str);



    int a = atoi("123");
    long b = atol("234235354");
    long long c = atoll("23423535456456");
    double d = atof("4564.4545");

    printf("a = %d\n b = %ld\n c = %lld\n d = %f\n", a, b, c, d);

    return 0;
}