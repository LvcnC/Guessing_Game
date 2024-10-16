#include <stdio.h>

int main(void){
/*
    char *string = "Hi!";
    printf("%c", *string); // move the pointer one step forward
    printf("%c", *(string + 1)); // and because strings are contigous, it will read the next letter
    printf("%c\n", *(string + 2));
*/
    char *a = "hi";
    char *b = "lolllll";

//normally, without the derefencing, it compares the addresses, which could never be the same
    // like this, it compares the value of every character cointained in each string
        // im assuming that, when one is shorter, it just gets met with the \0 char, and therefore is still different
    while(*a && *b){

        if(*a != *b){
            printf("different\n");
        // even if only ONE element is different, exit
            return -1;
        }
        a++;
        b++;
    }
    printf("same");
    return 0;
}