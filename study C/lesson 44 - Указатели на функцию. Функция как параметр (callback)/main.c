// #include <stdio.h>

// int sq_rect(int width, int height) 
// {
//     return width * height;
// }


// int per_rect(int width, int height)
// {

//     return 2 * (width + height);
// }


// void print_hi(void)
// {
//     puts("Hi!");
// } 

// int main() {

//     int (*ptr_func) (int, int);
//     ptr_func = sq_rect;

//     int res = ptr_func(2, 3);


//     printf("sq_rect = %p\n", sq_rect);

//     printf("res = %d\n", res);




//     int (*ptr_func_2) (int, int);
//     ptr_func_2 = per_rect;

//     int res_2 = ptr_func_2(2, 3);

//     printf("res_2 = %d\n", res_2);




//     void (*ptr_hi) (void);
//     ptr_hi = print_hi;

//     ptr_hi();

//     return 0;
// }









#include <stdio.h>
#define SIZE    10


void filter(int dst[], size_t size_dst, const int src[], size_t size_src, int (*is_correct)(int))
{
    for(int i = 0; i < size_dst; ++i) {
        dst[i] = 0;
    }

    for(int i = 0, j = 0; i < size_src; ++i) {
        if(is_correct(src[i])) {
            dst[j++] = src[i];
        }
    }
}

int is_even(int x) 
{
    return x % 2 == 0;
}


int main() 
{

    int digit[] = {-3, 4, 10, 11, -5, 3};


    int result[SIZE];

    filter(result, SIZE, digit, sizeof(digit) / sizeof(*digit), is_even);

    for(int i = 0; i < SIZE; ++i) {
        printf("%d\n", result[i]);
    }

    return 0;
}