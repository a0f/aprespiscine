// Modifies the volume of an audio file

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w+");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    // Read/put header into buffer from input file.
    uint8_t buffer[HEADER_SIZE];
    fread(buffer, 1, HEADER_SIZE, input);

    // Write buffer into header of the output file
    fwrite(buffer, 1, HEADER_SIZE, output);

    // find sample rate bit designation in input header
    uint8_t buffersample[2];
    rewind(input);
    fseek(input, 34, SEEK_SET);
    fread(buffersample, 1, 2, input);

    uint16_t samplerate = (buffersample[0] | (buffersample[1] << 8));

    // determine size of file
    rewind(input);
    fseek(input, 0, SEEK_END);
    int filebytes = ftell(input) - HEADER_SIZE;

    // sets buffer to be size of file
    int16_t buffer3[filebytes];
    // reads size of file minus header to buffer
    rewind(input);
    fseek(input, 44, SEEK_SET);
    fread(buffer3, sizeof(int16_t), filebytes, input);

    // converts audio to factor
    for (int i = 0; i < filebytes; i++)
    {
        buffer3[i] = (buffer3[i] * factor);
    }
    // buffer to output, converting at proper bit depth
    fwrite(buffer3, sizeof(int16_t), filebytes / (samplerate / 8), output);
    rewind(output);
    fseek(output, 0, SEEK_END);

    // Close files
    fclose(input);
    fclose(output);
}
