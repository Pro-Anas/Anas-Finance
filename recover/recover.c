#include <stdio.h>
#include <stdlib.h>

 #define BLOCK_SIZE 512
int main(int argc, char *argv[])
{
   if (argc != 2)
   {
    printf("Usage: ./recover IMAGE\n");
    return 1;
   }

   char *file = argv[1];
   FILE * raw_file
}