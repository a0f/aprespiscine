#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //creates a new type which holds a collection of base types
    typedef struct
    {
        string name;  // these are callled the structure's members
        int votes;    // gives an idea of what it means to be a 'candidate'
    }
    candidate;  // give the struct a name that can be re-used in rest of file


    // can access it/store it this way based on the previous member structure
    candidate president; // candidate is the template, and *requires* a var name like president
    president.name = "Samia"; // can change members this way, but cannot ADD members which program is runnning
    president.votes = 10;

    // can also make an array of candidates

    // array that stores 4 elements, which are candidates
    candidate candidates[4];

}

