#include <stdio.h>
#include <string.h>
int main() {

    // char source[100] = "Source string";
    // char destination[10];

    // const char *src = source;
    // char *dst = destination;

    // int max_len_copy = sizeof(destination);

    // while(*src != '\0' && max_len_copy-- > 1) {
    //     *dst++ = *src++;
    // }

    // *dst = '\0';

    // puts(destination);



    // char source[100] = "Source string";
    // char destination[10];
    // int max_len = sizeof(destination) - 1;

    // // strcpy(destination, source);

    // // strncpy(destination, source, max_len);


    // strncpy(destination, "Source string", max_len);
    // destination[max_len] = '\0';

    // puts(destination);





    // char str[100] = "Length of the string";

    // const char *buf = str;
    // size_t length = 0;

    // while(*buf++) {
    //     length++;

    // }

    // printf("length = %zu\n", length);






    // strlen


    // char str[100] = "Length of the string";

    // size_t length = strlen(str);


    // printf("length = %zu\n", length);
    // return 0;





    // strcat and strncat

    char str_cat[100] = "Ilishan";
    char str[15] = "Gazdiev";

    strcat(str_cat, str);
    printf("%s", str_cat);

    printf("\n");

    size_t max_add = sizeof(str) - strlen(str) - 1;
    strncat(str, str_cat, max_add);
    str[sizeof(str) - 1] = '\0';

    printf("%s", str);
}