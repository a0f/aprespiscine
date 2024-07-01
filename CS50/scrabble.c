#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int scoreword(string word);

int main(void)
{
    // prompt user for two inputs, player 1 word player 2 word
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // initialize variable letters as points

    // calculate which word has more points
    scoreword(word1);
    scoreword(word2);
    // print result
    if (scoreword(word1) > scoreword(word2))
    {
        printf("Player 1 wins!\n");
    }
    else if (scoreword(word2) > scoreword(word1))
    {
        printf("Player 2 wins!\n");
    }
    else if (scoreword(word2) == scoreword(word1))
    {
        printf("Tie!\n");
    }
}

int scoreword(string word)
{
    int score = 0;
    for (int index = 0, length = strlen(word); index < length; index++)
    {
        word[index] = tolower(word[index]);
        if (word[index] == 'a' || word[index] == 'e' || word[index] == 'i' ||
            word[index] == 'o' || word[index] == 'u' || word[index] == 'l' ||
            word[index] == 'n' || word[index] == 's' || word[index] == 't' ||
            word[index] == 'r')
        {
            score += 1;
        }
        else if (word[index] == 'd' || word[index] == 'g')
        {
            score += 2;
        }
        else if (word[index] == 'b' || word[index] == 'c' ||
                 word[index] == 'm' || word[index] == 'p')
        {
            score += 3;
        }
        else if (word[index] == 'f' || word[index] == 'h' ||
                 word[index] == 'v' || word[index] == 'w' || word[index] == 'y')
        {
            score += 4;
        }
        else if (word[index] == 'k')
        {
            score += 5;
        }
        else if (word[index] == 'j' || word[index] == 'x')
        {
            score += 8;
        }
        else if (word[index] == 'q' || word[index] == 'z')
        {
            score += 10;
        }
        else
        {
            score += 0;
        }
    }
    return score;
}
