#include <stdio.h>

int main() {

    // int n, s;

    // scanf("%d", &n);

    // for(s = 0; n > 0; --n) {
    //     s += n * n;
    // }
    // printf("s = %d\n", s);

    int n = 5, p = 1;

    for(int i = 1; i <= n; ++i) {
        p = p * i;
    }
    printf("%d\n", p);
    
    return 0;
}