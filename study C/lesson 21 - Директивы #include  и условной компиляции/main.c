// #include <stdio.h>
// int printf(const char *format, ...);
// #include "tmp/printf.h"


#define LANG_C

#if defined(LANG_C)

# include <stdio.h>

#else 

# include <iostream>

#endif

int main() {
    int x = 5;

#ifdef LANG_C 

    printf("%d\n", x);

#else
    std::cout << x << std::endl;
#endif

    return 0;
}



/* Директивы условной компиляции

    1. #if - Проверка произвольного условия.
    2. #else - Определение ветки <<иначе>>.
    3. #endif - Директива (метка) завершения фрагмента для условия. 
    4. #ifdef - Сокращение от if defined. Позволяет делать проверку на наличие
    макроимени в текущем модуле.
    5. #ifndef - Сокращение от if !defined. Позволяет делать проверку на отсутствие макроимени
    в текущем модуле. 
    6. #elif - Сокращение от else if. Позволяет делать проверку по ветке <<иначе>>. 
    7. #elifdef - Сокращение от else if defined. Для реализации проверки наличия 
    макроимени по ветке <<иначе>>.
    8. elifndef - Сокращение от else if !defined. Для реализации проверки отсутствия 
    макроимени по ветке <<иначе>>.
*/ 