#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
   string text = get_string("Text: ");

   int letters = 0;
   int words = 1;
   int sentences = 0;

   for (int i = < strlen(text); i++)
{
   if (isalpha(text[i]))
    {
         letters++;
    }

   else if (text[i] == ' ')
   {
      words++;
   }

   else if (texr[i] == '.' || text[i] == '?' || text == '!')
   {
       sentences++;
   }
}
   float L = (float) letters /  (float) words * 100
   float 5 = (float) sentences /  (float) words * 100

   int index = round (0.0588 * L - 0.296 * 5 - 15.8);

}
