#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
{
  height = get_int ("Enter height here");
}
   while (height < 1 || height > 8);

   for (row =0; row < height; row++)
   {
    printf("\n";)
   }
}

