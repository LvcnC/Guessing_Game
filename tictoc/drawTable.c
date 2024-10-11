#include <stdio.h> 
void DrawTable(){

    int orizLength = 10;
    int blankSpace = 8;
    const int OVERLENGTH = 2;
    char filler = 'A';
    int turn = 0;
    //char sign1 = '#';

// this is how many times it has to repeat the loop (only twice)
    for(int k = 0; k <= OVERLENGTH; k++){
        printf("\n");

    // this is the orizzontal length
        for(int j = 0; j <= blankSpace; j++){
            
            if(j == blankSpace / blankSpace || j == blankSpace / 2 || j == blankSpace - 1){

                printf("%c", filler);
                filler++;
                printf("%i", turn);
                turn++;


            }else{
                printf(" ");
            }
            // once it reaches 1/3 of the entire length || it's the entire length
                // write "|"
            if(j == blankSpace / 3 || j == (2 * blankSpace) / 3){
                printf("|");
            }
        }
        printf("\n");

        // when k = 2, on the last loop, it will skip the orizzontal line, and only draw the vertical
        if(k <= OVERLENGTH - 1){
        // ' -1 ' because it has to be drawn EVERY TIME, but the LAST loop
            // draw it as long as it's not the last loop, then skip it
            for(int i = 0; i <= orizLength; i++){
                printf("-");
            }
        }
    }
}