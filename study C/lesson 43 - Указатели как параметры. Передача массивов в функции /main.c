// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void swap_2(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;

// }


//     int sum_ar(const int *arr, int length) {
//         int res = 0;
//         for(int i = 0; i < length; ++i) {
//             res += arr[i];
//         }

//         return res;
//     }


// int main()
// {
//     // short var_a = 10;
//     // short *ptr = &var_a;
//     // *ptr = 5;

//     srand(time(NULL));

//     // int x = 5, y = 10;

//     // swap_2(&x, &y);

//     // printf("x = %d\t y = %d\n", x, y);

//     int arr[10];

//     size_t size_of_arr = sizeof(arr) / sizeof(arr[0]);

//     for(int i = 0; i < size_of_arr; ++i) {
//         arr[i] = rand() / rand();
//         printf("[%d], ", arr[i]);
//     } 


//     printf("\nsum of arr = %d\n", sum_ar(arr, size_of_arr));


//     return 0;
// }







// #include <stdio.h>

// const char *find_space(char *buf)
// {
//     while(*buf != '\0') {
//         if(*buf == ' ') {
//             return buf;
//         } 
//         buf++;
//     }
// }

// int main()
// {
//     char str[] = "Hello World";
//     printf("space on : %p\n", find_space(str));
//     return 0;
// }






// 2D array

#include <stdio.h>
#define COLS    3

void show_ar_2D(const short (*ar)[COLS], int rows) 
{
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < COLS; ++j) {
            printf("[%d], ", ar[i][j]);
        }
        putchar('\n');
    }
}

int main()
{
    short ar[][COLS] = {{1, 2, 3}, {4, 5, 6}};
    show_ar_2D(ar, sizeof(ar) / sizeof(*ar));
    return 0;
}





// void print_arr2D(int rows, int cols, int arr[rows][cols])
// {
//   for(int i = 0; i < rows; i++) {
//     for(int j = 0; j < cols; j++) {
//       printf("%d ", arr[i][j]);
//     }
//     putchar('\n');
//   }
// }

// int main() {
//   int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//   print_arr2D(3, 4, arr);

//   return 0;
// }