#include <stdio.h>

int main(){
    int nums[] = {5, 59, 4, 1, 23, 16, 0};
    //int nums[] = {1, 2, 4, 10, 23, 160, 200};
    int length = sizeof(nums) / sizeof(nums[0]);

// this is to make it compare EVERY number in the array
    for(int k = 0; k < length; k++){

        for(int i = 1; i < length; i++){

        // temporable variable to deposit one of the value
            int temp = 0;

            if(nums[i] < nums[i - 1]){

                temp = nums[i];
                nums[i] = nums[i - 1];
                nums[i-1] = temp;

            }
        }
    }
    for(int j = 0; j < length; j++){
        printf("%i\n", nums[j]);
    }
}