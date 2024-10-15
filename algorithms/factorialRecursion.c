#include <stdio.h>
#include <cs50.h>

typedef struct{
    string name;
    int votes;
} candidate;

int Factorial(unsigned int n){
    // write the base case first, what you know

    // base case
    if(n == 1){
        return 1; // the factorial of 1, is 1
    }

// if it's not 1,
    // return n * (n - 1)
    return n *  Factorial(n - 1);
// ex: return 3 * 2;
}



int main(void){

    // FACTIORIAL RECURSION
    int n = 0;

    do{
        printf("Enter a number: ");
        scanf("%i", &n);
        printf("The result is %i\n", Factorial(n));

    } while(n < 0);

}