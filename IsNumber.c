#include <stdio.h>

// this checks if the string only contains numbers
// so that, later, it can be turned positive and compared to the randominized number
int IsNumber(char string[]){

    for(int i = 0; string[i] != '\0'; i++)
    {
        if (!(string[i] >= '0' && string[i] <= '9')){
            printf("You must enter a number\n");
            return -1;
        } 
        // even if only just ONE element of the string is a letter, it returns 1
    }    
    return 0;
}