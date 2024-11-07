#include <stdio.h>
#define TOTAL_MARKS 10
int main() {

    // float func_1[100] = {2.4, -3.8, 0, 10.2, 11.78, -5.43};
    // float func_2[50];

    // func_2 = func_1;  do not like that

/* My function 
    for(int i = 0; i < sizeof(func_2) / sizeof(func_2[0]); i++) {
        func_2[i] = func_1[i];
        printf("[%.2f],", func_2[i]);
    }
*/


    // int size_1 = sizeof(func_1) / sizeof(func_1[0]);
    // int size_2 = sizeof(func_2) / sizeof(func_2[0]);
    // int size = (size_1 < size_2) ? size_1 : size_2;

    // printf("size_1 = %d\n", size_1);
    // printf("size_2 = %d\n", size_2);
    // printf("size = %d\n", size);

    // for(int i = 0; i < size; i++) {
    //     func_2[i] = func_1[i];
    //     printf("[%.2f],", func_2[i]);
    // }




    // When we have a two different array like float func_1 and int func_2

    // float func_1[100] = {12.2, 34.2, 1.2, -1.2, 2.44, 8.8};
    // int func_2[50];

    // int size_1 = sizeof(func_1) / sizeof(func_1[0]);
    // int size_2 = sizeof(func_2) / sizeof(func_2[0]);
    // int size = (size_1 < size_2) ? size_1 : size_2; 

    // printf("size_1 = %d\n", size_1);
    // printf("size_2 = %d\n", size_2);
    // printf("size = %d\n", size);

    // for(int i = 0; i < size; i++) {
    //     func_2[i] = (int)func_1[i];
    //     printf("[%d], ", func_2[i]);
    // }





    // Paste item in array index 2

    // int marks[TOTAL_MARKS] = {3, 2, 5};

    // int insert_index = 2; 

    // for(int i = TOTAL_MARKS - 1; i > insert_index; --i) {
    //     marks[i] = marks[i -1];
    //     printf("marks[%d] = marks[%d]\n", i, i-1);
    // }
    
    // marks[insert_index] = 4;
    // for(int i = 0; i < TOTAL_MARKS; i++) {
    //     printf("[%d], ", marks[i]);
    // }
    




    // Delete the item in array index of item 3


    // int marks[TOTAL_MARKS] = {3, 2, 4, 5, 2, 4};
    // int del_index = 3;

    // for(int i = del_index; i < TOTAL_MARKS - 1; ++i) {
    //     marks[i] = marks[i + 1];
    //     printf("marks[%d] = marks[%d]\n", i, i + 1);
    // }

    // for(int i = 0; i < TOTAL_MARKS; i++) {
    //     printf("[%d], ", marks[i]);
    // }





    // Sort item of array like that 1, 2, 3, 4, 5

    char a[] = {-3, 5, 0, -8, 1, 10};
    int size = sizeof(a) / sizeof(a[0]);
    int pos;

    for(int i = 0; i < size - 1; ++i) {
        pos = i;
        for(int j = i + 1; j < size; ++j) {
            if(a[pos] > a[j]) {
                pos = j;
            }

            if(pos != i) {
                int t = a[i];
                a[i] = a[pos];
                a[pos] = t;
            }
        }
        printf("[%d], ", a[i]);
    }


    return 0;

}