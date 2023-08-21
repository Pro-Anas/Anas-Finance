#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string name = get_string("WHAT IS YOUR NAME?\n");
  printf("Hello,%s\n",name);
}