#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_MARKS 13
// #define SIZE_BUFFER 1024

int main() {

    // double f[30];

    // char buffer[SIZE_BUFFER];
    // int marks[13];
    // short ar[8 * 5];
    // char bytes[sizeof(double)];


    srand(time(NULL));
    int marks[TOTAL_MARKS];

    for(int i = 0; i < TOTAL_MARKS; i++) {
        marks[i] = (int)rand() % (int)rand();
        printf("%d\n", marks[i]);
    }

    printf("%d", marks[12]);


    return 0;
    
}