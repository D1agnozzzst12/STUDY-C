#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // time_t t = time(NULL);
    
    // srand(t);

    srand(time(NULL));
    int range = 10;

    int r_1 = rand() % range;
    int r_2 = rand() % range -5;
    int r_3 = rand() % range + 1;
    int r_4 = rand() + rand();


    // Вещественные значение

    double range_float = (double)rand() / (double)RAND_MAX; // [0, 1]
    

    printf("range_float = %f\n", range_float);

    printf("r_1 = %d\t r_2 = %d\t r_3 = %d\n r_4 = %d\t%d\t%d\n", r_1, r_2, r_3, rand(), rand(), rand());
    

    return 0;
}