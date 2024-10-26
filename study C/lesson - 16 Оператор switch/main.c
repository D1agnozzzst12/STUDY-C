#include <stdio.h>

int main() {
/*
    int item;

    printf("1. Learning C language\n"
            "2. Learning Python language\n"
            "3. Learning Java language\n"
            "4. Learning C++ language\n"
            "5. Exit\n");

    
    if(scanf("%d", &item) != 1) {
        printf("Error input");
        return 0;
    }

    switch(item) {
        case 1:
        printf("Learning C language\n");
        break;

        case 2:
        printf("Learning Python language\n");
        break;

        case 3:
        printf("Learning Java language\n");
        break;

        case 4:
        printf("Learning C++ language\n");
        break;

        case 5:
        printf("Exit\n");
        break;

        default: 
        printf("ERROR INPUT");
    }
    */


   char item;

   if(scanf("%c", &item) != 1) {
    printf("Error input");
    return 0;
   }

   switch(item) {
    case 'a':
    case 'A':
    printf("Symbol A\n");
    break;
    

    case 'b':
    case 'B':
    printf("Symbol B\n");
    break;


    case 'c':
    case 'C':
    printf("Symbol C\n");
    break;


    case 'd':
    case 'D':
    printf("Symbol D\n");
    break;

    default:
    printf("Incorrect Symbol");
   }
   

    return 0;
}