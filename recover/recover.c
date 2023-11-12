#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define BLOCK_SIZE 512


int main(int argc, char *argv[])
{
   if (argc != 2)
   {
    printf("Usage: ./recover IMAGE\n");
    return 1;
   }

   char *file = argv[1];
   FILE * raw_file = fopen(file, "r");
   if (raw_file == NULL)
   {
    printf("could not open %s.\n",file);
    return 1;
   }

bool found_jpg = false;
int jpg_count = 0;
uint8_t buffer[BLOCK_]
}