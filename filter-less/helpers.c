#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i - 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int average = (int)((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0 + 0.5);

            image[i][j].rgbtBlue = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtRed = average;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++ )
    {
        for (int j = 0; j < width; j++)
        {
            int originalRed = image[i][j].rgbtRed;
            int originalGreen = image[i][j].rgbtGreen;
            int originalBlue = image[i][j].rgbtBlue;

            image[i][j].rgbtRed = fmin(255, (int)(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue + 0.5)); //convert red
            image[i][j].rgbtGreen = fmin(255, (int)(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue + 0.5)); //convert green
            image[i][j].rgbtBlue = fmin(255, (int)(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue + 0.5)); //convert blue
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RDBTRIPLE temp = image[i][j];
            image[i][j] = image[i][with - 1 - j]; // swap pixels
            image[i][width - 1 - j] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
