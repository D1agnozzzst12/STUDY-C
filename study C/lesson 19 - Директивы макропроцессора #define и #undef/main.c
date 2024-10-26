#include <stdio.h>

// #define MENU_TRANSL 1
// #define MENU_ADD 2
// #define MENU_EXIT 3
// #define MENU_FMT "You have selected manu item %d\n"
// #define FIRST_LETTER 'a'

#define FIVE    5
#define TEN     2 * FIVE
#undef TEN
#define TEN     10
#define TEXT    "Text message in one line"
#define TEXT2   "Text message in \
one line"
#define PRINT_D printf("digit = %d\n", digit)
#define FORMAT "digit = %d\n"


int main() {
    

    // int item;
    // scanf("%d", &item);

    // switch(item) {
    //     case MENU_TRANSL:
    //     printf("Translate words\n");
    //     break;

    //     case MENU_ADD: 
    //     printf("Add words\n");
    //     break;

    //     case MENU_EXIT:
    //     printf("Exit\n");
    //     break;

    //     default:
    //     printf("Incorrect menu item\n");
    // }

    int digit = FIVE;

    PRINT_D;

    digit = TEN;


    printf(FORMAT, digit);

    printf(TEXT "\n");

    printf(TEXT2 "\n");



    return 0;
}