#include <stdio.h>

// we want to know how many steps (division) does it take for every number, to become 1
int collatz(unsigned int n){

// counter
    int i = 0;
    if(n == 1){
        return 0;
    }// if i divide by 2, is there no reminder? 
    else if(n % 2 == 0)
    {   
        i++;
        return i + collatz(n / 2);
    } else{
        i++;
        return i + collatz(3*n + 1);
    }

}

int main(void){
    printf("%d\n", collatz(50));
}