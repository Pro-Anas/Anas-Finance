#include <stdio.h>
#include <cs50.h>

int main(void)
{

int scores[3];
for (int i = 0; i < 3; i++)
{
     scores[i] = get_int("Score: ");
}

printf("Average: %f\n",average(scores));
}
float average (int array[])
(
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + array [i];
    }
    return sum / (float) N;
)