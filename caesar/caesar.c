#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
   if (argc != 2)
   {
      printf("Usage: ./caesar key");
      return 1;
   }
    for (int i = 0; i < strlen (argv[1]); i++)
    {
        if (! is digit(argv[1][i]))
    {
        printf("Usage: ./ caesar key");
        return 1;
    }
}
