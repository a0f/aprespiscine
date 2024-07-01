#include "helpers.h"
#include "math.h"
#include "stdio.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int colorcalc = 0;
            // Take average of red, green, and blue
            colorcalc += image[i][j].rgbtBlue;
            colorcalc += image[i][j].rgbtGreen;
            colorcalc += image[i][j].rgbtRed;

            colorcalc = round(colorcalc / 3.0);
            // Update pixel values
            image[i][j].rgbtBlue = colorcalc;
            image[i][j].rgbtGreen = colorcalc;
            image[i][j].rgbtRed = colorcalc;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Compute sepia values
            int sepiaBlue = round(.272 * image[i][j].rgbtRed +
                                  .534 * image[i][j].rgbtGreen +
                                  .131 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed +
                                   .686 * image[i][j].rgbtGreen +
                                   .168 * image[i][j].rgbtBlue);
            int sepiaRed = round(.393 * image[i][j].rgbtRed +
                                 .769 * image[i][j].rgbtGreen +
                                 .189 * image[i][j].rgbtBlue);

            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            // Update pixel with sepia values
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtRed = sepiaRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int length = round(width / 2);
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            // stores left side
            int bufferblue = image[i][j].rgbtBlue;
            int buffergreen = image[i][j].rgbtGreen;
            int bufferred = image[i][j].rgbtRed;

            // reflects ride side to left
            image[i][j].rgbtBlue = image[i][width - j - 1].rgbtBlue;
            image[i][j].rgbtGreen = image[i][width - j - 1].rgbtGreen;
            image[i][j].rgbtRed = image[i][width - j - 1].rgbtRed;

            // reflects left side to right
            image[i][width - j - 1].rgbtBlue = bufferblue;
            image[i][width - j - 1].rgbtGreen = buffergreen;
            image[i][width - j - 1].rgbtRed = bufferred;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    int debugcount = 0;
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int blueblur = 0;
            int greenblur = 0;
            int redblur = 0;
            float pixelcount = 0.0;

            for (int pi = -1; pi <= 1; pi++)
            {
                for (int pj = -1; pj <= 1; pj++)
                {
                    if ((i + pi >= 0 && i + pi < height) &&
                        (j + pj >= 0 && j + pj < width))
                    {
                        blueblur += copy[i + pi][j + pj].rgbtBlue;
                        greenblur += copy[i + pi][j + pj].rgbtGreen;
                        redblur += copy[i + pi][j + pj].rgbtRed;
                        pixelcount++;
                    }
                }
            }
            image[i][j].rgbtBlue = (round(blueblur / pixelcount));
            image[i][j].rgbtGreen = (round(greenblur / pixelcount));
            image[i][j].rgbtRed = (round(redblur / pixelcount));
        }
    }
    return;
}
