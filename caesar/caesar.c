#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check if the correct number of command-line arguments is given
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if the provided key is a valid number
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key from string to integer
    int k = atoi(argv[1]);

    // Get plaintext from the user
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    // Encrypt and print the ciphertext
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            // Encrypt uppercase letters
            printf("%c", (plaintext[j] - 'A' + k) % 26 + 'A');
        }
        else if (islower(plaintext[j]))
        {
            // Encrypt lowercase letters
            printf("%c", (plaintext[j] - 'a' + k) % 26 + 'a');
        }
        else
        {
            // Print other characters as is
            printf("%c", plaintext[j]);
        }
    }

    printf("\n");
    return 0;
}
