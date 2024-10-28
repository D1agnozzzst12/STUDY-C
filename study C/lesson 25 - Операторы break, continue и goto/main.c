#include <stdio.h>

int main() {
    
    // double x, s = 0.0;

    // while(scanf("%lf", &x) == 1) {
    //     if(x < 0) {
    //         break;
    //     } 
    //     s += x;
    // }
    // printf("s = %.2f", s);

    int s = 0;

    for(int i = 1; i <= 10; ++i) {
        for (int j = 7; j >= 5; --j) {
            if(i - j > 0) {
                goto exit_sum;
                s += i - j;
            }
        }
        exit_sum: printf("s = %d\n", s); 
    }

    return 0;
}