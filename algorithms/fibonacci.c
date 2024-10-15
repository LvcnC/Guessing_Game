#include <stdio.h>

int Fibonacci(int n){
    // Base case: if n is 0 or 1, return n
    if (n <= 1){
        return n;
    }
    // Recursive case: sum of the two preceding Fibonacci numbers
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}


int main(void){
    int n = 5;
    int result = Fibonacci(n);
    printf("%d\n", result);
    return 0;

}