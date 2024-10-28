#include <stdio.h>

int main() {
    // char d = 10;
    // char *gpt = &d;

    // printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    // *gpt = 100;
    // printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);



    int d = 10;
    int *gpt = &d;

    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    *gpt = 75432;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);
    return 0;
}