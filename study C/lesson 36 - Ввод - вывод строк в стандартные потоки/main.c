#include <stdio.h>

int main() {

    // char sp[] = "Hello World";

    // printf("sp = %s\n", sp);    
    // printf("The last Name is: %s\n", "Gazdiev");
    // puts(sp);
    // puts(sp);


    // char name[50];
    // printf("What is your name: ");
    // scanf("%s", name);
    // printf("Your name is %s\n", name);


    // char bf[10];
    // scanf("%9s", bf);
    // printf("%s\n", bf);
    // return 0;



    // char* gets(char* buf)


    // char bf[10];

    // fgets(bf, sizeof(bf), stdin);
    // puts(bf);






    // int getchar(void)

    char bf[10];

    int max_len = sizeof(bf), i = 0;

    char *ptr = bf, ch;
    
    while (ch = getchar() != '\n' && ch != EOF && i < max_len - 1) {
        ptr[i++] = ch;
    }
    ptr[i] = '\0';
    puts(bf);

}