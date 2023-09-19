#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
   string names [] = {"Anas", "khaled"};
   string numbers [] = {"996+ 505379004", "966+ 569316898"};
   string name = get_string ("Name ");
   for (int i = 0; i < 2; i++)
   {
     if (strcmp(names[i], name) == 0)
     {
        printf ("Found %s\n", numbers[i]);
        return 0;
     }
}