#include <stdio.h>
#include <cs50.h>

int main(void)
{

int scores[3];
 scores[0]= get_int("score: ");
 scores[1]= get_int("score: ");
 scores[2]= get_int("score: ");

printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}