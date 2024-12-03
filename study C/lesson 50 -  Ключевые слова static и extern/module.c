#include <stdlib.h>

int global_var = 5;

// static int global_seed_randint = 0; будет видна только в этом модуле  .. Внутренее связывание 
int global_seed_randint = 0;  // Внешнее связывание 

int randint(int a, int b) {
    int right = a, left = b;
    if(a > b) {
        right = b;
        left = a;
    }

    return rand() % (left - right + 1) + right;
}