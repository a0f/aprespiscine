#include <cs50.h>
#include <stdio.h>

typedef struct
    {
        string name;
        int votes;
    }
    candidate;

int main(void)
{

    const int num_candidates = 3;
    candidate candidates[num_candidates];


    candidates[0].name = "Samia";
    candidates[0].votes = 39;

    candidates[1].name = "Samir";
    candidates[1].votes = 58;

    candidates[2].name = "Sam";
    candidates[2].votes = 42;

    // TODO: Find hgihest number of votes
    int highest_votes = 0;
    string winningcandidate;
    for (int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes > highest_votes)
        {
            highest_votes = candidates[i].votes;
            winningcandidate = candidates[i].name;
        }
    }
    // TODO: Print name of candidate with highest number
    printf("%s\n", winningcandidate);

}


