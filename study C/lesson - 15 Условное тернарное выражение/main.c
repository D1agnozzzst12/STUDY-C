#include <stdio.h>
#include <math.h>
int main() {
    // double a = 7.5, b = -3.43;
    
    // double max_ab = a > b ? a : b;
    // double max_ab = (a > b) ? a + 2 : b - 5;


    // double res_abs = (a < b) ? fabs(a) : fabs(b);


    // if(a > b) {
    //     max_ab = a;
    // } else {
    //     max_ab = b;
    // }
    


    // printf("%.2f\n", max_ab);
    // printf("%.2f\n", res_abs);




    // int x = 8;
    // printf("x is %s digit\n", (x % 2 == 0) ? "even" : "odd");



    int a = 2, b = 3, c = -4;

    int max = (a > b) ? (a > c ? a : c ) : (b > c ) ? b : c;

    /* int max = (a > b) ? (a > c ? a : c ) : (b > c ) ? b : c; 
    
        if(a > b) {
            if (a > c) {
                return a;
            } else {
                return c
            }
        } else if (b > c) {
            return b;
        } else {
            return c;
        }
    
    */ 

    printf("Max is %d", max);
    return 0;
}