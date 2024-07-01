#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover input\n");
        return 1;
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    // create buffer for 1 block of data
    const int BLOCK_SIZE = 512;

    uint8_t buffer[BLOCK_SIZE];

    // store filename
    char filename[8];

    // keep count for filenames
    int jpgcount = 0;

    // file pointer to img
    FILE *img = NULL;

    // check if jpg was already found
    int jpgfound = 0;

    // will go until data is less than expected blocks
    // will end loop when less than expected (end of data)
    while (fread(buffer, 1, 512, input) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            if (jpgcount == 0)
            {
                sprintf(filename, "%03i.jpg", jpgcount);
                img = fopen(filename, "w");
                fwrite(buffer, 1, 512, img);
                jpgfound = 1;
                jpgcount++;
            }
            else
            {
                fclose(img);
                sprintf(filename, "%03i.jpg", jpgcount);
                img = fopen(filename, "w");
                fwrite(buffer, 1, 512, img);
                jpgcount++;
            }
        }
        else
        {
            if (jpgfound == 1)
            {
                fwrite(buffer, 1, 512, img);
            }
        }
    }
    fclose(img);
    fclose(input);
    return 0;
}
