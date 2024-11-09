#include <stdio.h>

int main() {

    // char game_pole[3][3] = {{0, 0, 0}, {1, 2}, {3, 4}};

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         printf("%d ", game_pole[i][j]);
            
    //     }
    //     printf("\n");
    // }




    // Size of 2D array

    // int game_pole[5][3];
    
    // size_t bytes = sizeof(game_pole);
    // size_t row_bytes = sizeof(game_pole[0]);
    // size_t rows = sizeof(game_pole) / sizeof(game_pole[0]);


    // size_t cols = sizeof(game_pole[0]) / sizeof(game_pole[0][0]);

    // printf("bytes row = %zu\n", row_bytes);
    // printf("bytes = %zu\n", bytes);
    // printf("rows = %zu\n", rows);
    // printf("cols = %zu\n", cols);





    // Ukazatel na dvumerny massiv 
    

    char game_pole[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    char *p_row = game_pole[1];

    printf("*p_row = %d\n", *p_row);
    printf("p_row = %p\n", p_row);
    printf("*p_row - 2 = %d\n", *(p_row - 2));


    char (*p_row_2)[3] = game_pole;
    printf("*p_row_2 = %d\n", *p_row_2);

    char x = p_row_2[0][1];
    printf("p_row_2[0][1] = %d\n", x);

    char x_2 = p_row_2[3][3];
    printf("p_row_2[3][3] = %d\n", x_2);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%d], ", game_pole[i][j]);
        }
        printf("\n");
    }
    return 0;
}