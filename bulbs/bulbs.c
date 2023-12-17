#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Get input from user
    int input = get_int("Enter a number (0-255): ");

    // Ensure input is within the range of a byte
    if (input < 0 || input > 255)
    {
        printf("Number must be between 0 and 255\n");
        return 1;
    }

    // Loop through each bit in the byte
    for (int i = BITS_IN_BYTE - 1; i >= 0; i--)
    {
        // Calculate the value of the bit at position i
        int bit = (input >> i) & 1;

        // Print the corresponding bulb
        print_bulb(bit);
    }

    printf("\n");
    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
