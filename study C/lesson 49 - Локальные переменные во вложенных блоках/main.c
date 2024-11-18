#include <stdio.h>

int main() {
    // int a = 1;

    // {
    //     int b = 2;
    //     printf("a = %d, b = %d\n", a, b);
    // }

    // printf("a = %d\n", a);


    int t  = 3;

    while(t-- > 0) {
        int t = 10;
        t--;
        printf("t = %d\n", t);
    }

    printf("main t = %d\n", t);

    int a = 33;

    for(int a = 0; a < 3; a++) {
        printf("a = %d\n", a);
    }

    printf("main a = %d\n", a);



    int p = 1;
    int n = 7;

    for(register int i = 2; i <= n; ++i) {
        p *= i;
    }

    printf("p = %d\n", p);
    return 0;
}


