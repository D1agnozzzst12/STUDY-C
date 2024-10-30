#include <stdio.h> 

int main() {

    // int g = 4;
    // int *ptr = &g;

    // printf("ptr = %u\n", ptr);

    // ptr++;
    // ptr += 3;
    // ptr -= 4;
    // ptr = ptr + 10;
    // ptr = ptr - 9;
    // --ptr;
    // ++ptr;
    // ptr++;
    // ptr--;


    // printf("ptr = %u\n", ptr);



    // short ar[10];
    // short *ptr = ar;
    // short *p = &ar[3];
    // printf("ptr = %u p = %u\n", ptr, p);

    // p += ptr; dont do like this

    // int res = p - ptr;

    // printf("res = %d\n", res);




    // int g = 476789;
    // char *ptr = (char *)&g;
    
    // for(int i = 0; i < sizeof(g); ++i) {
    //     printf("%d ", *ptr);
    //     ptr++;
    // }



    int g = 476789;
    char *ptr = (char *)&g;

    int x = (*ptr)++;
    printf("x = %d, g = %d\n", x, g);


    return 0;
}