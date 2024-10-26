#include <stdio.h>

// #define MENU_TRANSL 1
// #define MENU_ADD 2
// #define MENU_EXIT 3
// #define MENU_FMT "You have selected manu item %d\n"
// #define FIRST_LETTER 'a'



// #define FIVE    5
// #define TEN     2 * FIVE
// #undef TEN
// #define TEN     10
// #define TEXT    "Text message in one line"
// #define TEXT2   "Text message in \
// one line"
// #define PRINT_D printf("digit = %d\n", digit)
// #define FORMAT "digit = %d\n"

// # ##

#define SQ_PR(A, B) ((A) * (B)) 
#define TEXT(A, B)  "Square of rectangle (" #A ") x (" #B ")\n"
#define X_N(N)  x ## N
int main() {
    
    int res = SQ_PR(2, 3);
    int x1 = 1, x2 = -2, x4 = 10;
    printf("%d\n", X_N(2));
    printf(TEXT(x-2, y-3));

    return 0;
}