 #include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Get size of grid
   int n;
   do
   {
    n = get_int("Size: ");
   }
   while (n < 1);

    // Print Grid of Bricks
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        printf("#");
       }
       printf("\n");
    }

}