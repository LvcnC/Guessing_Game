#include <stdio.h>

int main(void){
    int n = 50;
    // this is the same as
    printf("%i lives in %p street\n", n, &n);
    // this
    int *pN = &n;
    printf("%i lives in %p street\n", n, pN);

    // Derefencing a pointer means using the address cointained, and and knock on that address's house door
    printf("Inside the address %p, there is %i\n", pN, *pN);


    // Strings are the pointer to the address of the first char
    char *string = "hi!";
    printf("%s\n", string);

// there is no need &string (though it would work), because string is already a pointer, so %p works fine
    printf("%p\n", string);  // the address of the first char, is the address of the whole string
    printf("%p\n", &string[0]); // first char = address of the string   ...c
    printf("%p\n", &string[1]); // second address of the string         ...d
    printf("%p\n", &string[2]); // third address of the string          ...e
    printf("%p\n", &string[3]); // last address of the string, the \0   ...f
// there needs to be &element, because now we're looking through characters, not strings nor pointers



    // COSTUME VARIABLES:
    typedef uint8_t BYTE;
// take the variable (8 bit unsigned), and let me call it BYTE instead

}