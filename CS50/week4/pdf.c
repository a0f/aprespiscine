#include <cs50.h>
#include <stdio.h>
#include <stdin.h>

int main(int argc, string argv[])
{   // needs a loop to check for the proper amount of argv, or else unsafe
    string filename = argv[1];
    FILE *f = fopen(filename, "r");
    uint8_t buffer[4];
    int blocks_read = fread(buffer, 1, 4, f);

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    printf("Blocks read: %i\n", blocks_read);
    fclose(f);

    // this demo is in section
}

