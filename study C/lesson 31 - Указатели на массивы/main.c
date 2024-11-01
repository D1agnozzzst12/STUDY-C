#include <stdio.h>


int main() {
    // short ar[] = {4, 3, 2, 1, 5, 6, 7};
    // short a_1 = *ar;
    // printf("%d\n", a_1);

    // short a_4 = *(ar + 3);
    // printf("%d\n", a_4);  

    // for (int i = 0; i < sizeof(ar) / sizeof(*ar); i++) {
    //     printf("[%d], ", ar[i]);
    // }

    // printf("\nIterations arr two\n");

    // for (int i = 0; i < sizeof(ar) / sizeof(*ar); i++) {
    //     printf("[%d], ", *(ar + i));
    // }





    // short ar[] = {4, 3, 2, 1, 5, 6, 7};

    // short *ptr_ar;
    
    // ptr_ar = ar;

    // short x = *ptr_ar;

    // printf("%d\n", x);
    
    // *(ptr_ar + 1) = -3;

    // printf("%d\n", *(ptr_ar + 1));


    // size_t len_1 = sizeof(ar);
    // size_t len_2 = sizeof(ptr_ar);

    // printf("len_1 = %zu \t len_2 = %zu\n", len_1, len_2);
    
    

    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    short *ptr_ar;

    ptr_ar = ar;

    short x = ptr_ar[2]; //ar[index] = *(ar+index)

    return 0;
} 