#include <stdio.h>
#include <string.h>
#include <stdlib.h> // to use malloc
#include <ctype.h>

// PART 2 of COPY

int main(void){

// so i cant do this with pointers,
    // so i created an array with 100 memory inside
    char s[100];
    printf("Enter a word: ");
    scanf("%s", s);
// ALLOCATE as much memory as the string 's'
    char *t = malloc(strlen(s) + 1);  // + 1, for the null term

// if my pointer points to NOTHING, or TOO BIG for the requested memory to allocate
    if(t == NULL){
        return 1;
    // throw an error and exit
    }

    strcpy(t, s);

    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }
    printf("%s\n", s);
    printf("%s\n", t);

// FREE!!! the memory you dont need anymore, or you'll slow your computer down
    free(t);
}
