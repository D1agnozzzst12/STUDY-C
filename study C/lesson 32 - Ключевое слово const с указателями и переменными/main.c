#include <stdio.h> 

int main() {

    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    const short *ptr_ar = ar;

    ptr_ar = 12;

    printf("ptr_ar = %d\n", *ptr_ar);
    return 0;
}