#include <stdio.h>

int main() {

    // int n;
    // int s = 0;

    // if(scanf("%d", &n) != 1) {
    //     printf("Error input");
    //     return 0;
    // }

    // while(n > 0) {
    //     s += n * n;
    //     n--;
    //     printf("s = %d\n", s);
    // }
    int s = 0;
    int x = 1;

    while(scanf("%d", &x) == 1 && x != 0) {
        s += x;
        printf("s = %d", s);
    }

    return 0;
}