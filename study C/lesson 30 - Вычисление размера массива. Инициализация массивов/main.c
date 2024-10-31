#include <stdio.h>
#define TOTAL_MARKS 13


int main() {

    // int marks[TOTAL_MARKS];

    // for(int i = 0; i < TOTAL_MARKS; i++) {
    //     marks[i] = i;
    //     printf("[%d], ", marks[i]);
    // }

    // size_t bytes_marks = sizeof(marks);
    // size_t size_marks = sizeof(marks) / sizeof(*marks); //  *marks = marks[0]
    // printf("size_marks = %zu\n", size_marks);
    // printf("\n%zu\n", bytes_marks / 4);



    // Initialisation on array 
    // We can do you like this :

    int marks[TOTAL_MARKS] = {1, 2, 3};

    for(int i = 0; i < TOTAL_MARKS; i++) {
        printf("[%d], ", marks[i]);
    }

    int corrds[] = {10, -2, 30};
    
    for(int i = 0; i < sizeof(corrds) / sizeof(corrds[0]); i++) {
        printf("\n[%d], ", corrds[i]);
    }

    // We also  can do like that

    short digits[10] = {-1, [2] = 5, 18, [9] = -1};
    for(int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++) {
        printf("\n[%d]", digits[i]);

    }

    return 0;
}