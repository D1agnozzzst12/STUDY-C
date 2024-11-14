// #include <stdio.h> 
// #include <math.h>

// double sq4_x(double x)
// {
    // double res = (x < 0) ? NAN : pow(x, 0.25);
    // return res;

//     if(x < 0) {
//         return NAN;
//     }

//     return pow(x, 0.25);
// }

// void print_even_x(int x)
// {
//     if(x % 2 == 0) {
//         printf("x = %d\n", x);
//     } else {
//         printf("This is not even\n");
//     }
// }


// void print_even_if_even(int x) {
//     if(x % 2 != 0) {
//         return;
//     }

//     printf("x = %d\n", x);
// }

// int main()
// {
//     printf("%f\n", sq4_x(16));
//     print_even_x(4);
//     print_even_if_even(2);
//     return 0;
// }


#include <stdio.h>
#include <math.h>

double min_2(double a, double b) 
{
    return (a < b) ? a : b;
}

double min_3(double a, double b, double c) 
{
    double min_ab = min_2(a, b);
    return (min_ab < c) ? min_ab : c;
}

int main() {

    int x = 1, y = -2, z = 10;

    double res_1 = min_2(x, y);
    double res_2 = min_3(x, y, z);
    double res_3 = min_2(min_2(x, y), z);
    double res_4 = min_2(x, min_2(y, z));


    printf("res_1 = %.2f\t res_2 = %.2f\nres_3 = %.2f\t res_4 = %.2f\n", res_1, res_2, res_3, res_4);

    return 0;
}