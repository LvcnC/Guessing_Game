#include <stdio.h>
#include <cs50.h>

typedef struct{
    string name;
    int votes;
} candidate;

int main(void){


    int numCandidates = 3;
    candidate Candidates[numCandidates];

    Candidates[0].name = "Massimo";
    Candidates[0].votes = 9;

    Candidates[1].name = "Julia";
    Candidates[1].votes = 13;

    Candidates[2].name = "Inno";
    Candidates[2].votes = 6;

    // TODO: find the candidate with the highest vote
    int highest_vote = 0;
    string winner;
    for(int i = 0; i < numCandidates; i++){

// highest_vote gets updated, every time it finds an amout of voters higher than itself
        if(highest_vote < Candidates[i].votes){

            highest_vote = Candidates[i].votes;

        // to remember the name of the candidate with the highest votes
            winner = Candidates[i].name;
            }

    }
    printf("%s has the highest votes: %i\n", winner, highest_vote);

*/

}