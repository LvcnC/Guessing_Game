#include <stdio.h>
#include <string.h> // for the files functions

typedef struct{
    char name[20];
    char number[27];
    //int age;
} person;

int main(void){

    person people[3];

    int length = sizeof(people) / sizeof(people[0]);

// this is how to copy a string into an array
    strcpy(people[0].name, "Carter");
    strcpy(people[0].number, "+39-123-123-1234");
    //people[0].age = 18; this works
    //people[0].name = "Carter"; this doesnt
// assigning the pointer of the array to the pointer of Carter, C!!! DOESNT LIKE IT
    // use strcpy instead, which transports the VALUE from the src pointer to the dst one

    strcpy(people[1].name, "David");
    strcpy(people[1].number, "+39-567-567-5678");

    strcpy(people[2].name, "John");
    strcpy(people[2].number, "+39-000-111-2222");
    
// open a file, and "append" to it (add, instead of "w", which would overwrite it everytime)
    FILE *file = fopen("phonebook.cvs", "w");
// to reach this file, we are usinga pointer
    // .cvs is a type of spreadsheet, where "," indicates a new line

    if (file == NULL){ // if the pointer goes wrong, you should make sure the program doesnt crash
        return 1;
    }

    for(int i = 0; i < length; i++){
        fprintf(file, "%s, %s\n", people[i].name, people[i].number);
    }
    fclose(file);
}