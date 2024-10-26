#include <stdio.h>


int main() {
    // int pass_code = 13;
    // int enter_code;
    // int c;
    
    // do {
    //     printf("Please enter the secret code:");
    //     scanf("%d", &enter_code);
    //     if(enter_code != pass_code) {
    //         printf("Wrong code!\n");
    //     } else {
    //         printf("That's is right code!\n");
    //     }
    //     while((c = getchar()) != '\n' && c != EOF) 
    //     {}
    // } while(enter_code != pass_code);
    // printf("Access is allowed\n");



    int total_box = 3;
    int total_files = 6;

    for(int i = 0; i < total_box; ++i) {
        for(int j = 0; j < total_files; ++j) {
            printf("Box %d\tfile %d\n", i+1, j+1);
        }
    }
    return 0;

}