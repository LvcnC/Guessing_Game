#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int array[] = {3, 4, 5, 6, 7, 8, 9, 11};
    int length = sizeof(array) / sizeof(array[0]);
    int num = 0;

    while(argc > 1){

    num = atoi(argv[1]);
    // MUST BE AT ARGV[    1    ], OR IT WILL TAKE THE EXECUTIVE FUNCTION, "./binarySearch"!!!!!!!!!!!!!


    int mid = 0;
    int low = 0;
    int high = length - 1;
    int counter = 0;
// as long as the high and low point dont cross each other
    while(low <= high){
// while (0 < 7)

        mid = (low + high) / 2;
// mid = (0 + 7) / 2            ------> [3]
        // mid = (0 + 2) / 2                  ---------> [1]

        if(num == array[mid]){
        // 4 == array[1] ( 4 ), then it is FOUND
            printf("Found: %i at the element %i\n", num, mid);
                // mid is the location
            return num;

        }else if(num < array[mid]){
// if 4 is less than 6 (position at array[3])
            high = mid - 1;
// high = [3] - 1               ------> [2]
        }else{
            low = mid + 1;
        }

    }
    }
    printf("Not found\n");
}