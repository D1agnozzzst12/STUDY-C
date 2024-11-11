#include <stdio.h>
#include <string.h>
int main() {

    // char s1[12] = "Hello";
    // char s2[10] = "Hello";

    // const char *str1 = s1;
    // const char *str2 = s2;

    // int i = 0;

    // for(; str1[i] != '\0' && str2[i] != '\0'; i++) {
    //  if(str1[i] != str2[i]) {
    //     puts("Strings are not equal");
    //     return 0;
    //  }   
    // }

    // if(str1[i] != str2[i]) {
    //     puts("String length are not equal");
    //     return 0;
    // }

    // puts("String are equal");







    // strcmp and strncmp


    // strcmp()


    // char s1[12] = "Hello";
    // char s2[10] = "Hello";

    // int res = strcmp(s1, s2);

    // if(res == 0) {
    //     puts("String are equal");
    // } else if(res < 0) {
    //     puts("The first string smaller then second string");
    // } else if(res > 0) {
    //     puts("The first string is larger then second string");
    // }


    // if(strcmp(s1, s2) == 0) {
    //     puts("String are equal");
    // } else if(strcmp(s1, s2) < 0) {
    //     puts("The first string smaller then second string");
    // } else if(strcmp(s1, s2) > 0) {
    //     puts("The first string is larger then second string");
    // }




    // strncmp()


    // const char *strings[] = {"Ship", "Shopping", "Shematic", "Super", "Car", "Sherif"};

    // for(int i = 0; i < sizeof(strings) / sizeof(*strings); i++) {
    //     if(strncmp(strings[i], "Sh", 2) == 0) {
    //         puts(strings[i]);
    //     }
    // }


    /* Функции поиска символов и подстрок

        1. char *strchr(const char *str, int val);
        выполняет поиск символа слева-направо с кодом val в строке str;

        2. char strrchr(const char *str, int val);
        выполняет поиск справа-налево с кодом val в строке str;

        3. char *strstr(const char *str, const char *find);
        выполняет поиск слева-направо подстроки find в строке str;

        4. char *strpbrk(const char *str, const char *find);
        выполняет поиск слева-направо любого символа из подстроки find в строке str; 
    
    */ 



// strchr()


//    char str[] = "Abrakadabra";
//    char *ptr = strchr(str,  'a');

//    printf("str = %p\n ptr = %p\n", str, ptr);
//    if(ptr != NULL) {
//     printf("*ptr = %c\n", *ptr);
//    }



// strrchr()


//   char str[] = "Abrakadabra";
//    char *ptr = strrchr(str,  'a');

//    printf("str = %p\n ptr = %p\n", str, ptr);
//    if(ptr != NULL) {
//     printf("*ptr = %c\n", *ptr);
//    }



// strstr()


//   char str[] = "Abrakadabra";
//    char *ptr = strstr(str,  "ra");

//    printf("str = %p\n ptr = %p\n", str, ptr);
//    if(ptr != NULL) {
//     printf("*ptr = %s\n", ptr);
//    }




// strpbrk()

  char pass[] = "dfdfg90!#$$A";
   char *ptr = strpbrk(pass,  "@!#$^&?");

   printf("str = %p\n ptr = %p\n", pass, ptr);
   if(ptr != NULL) {
    printf("ptr = %s\n", ptr);
   }




    return 0;
}