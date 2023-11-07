#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s == t)
    {
        printf("same\n");
    }
    else if ( s > t )
    {
        printf("s is greater than t\n");
    }
    else
    {
        printf("s less than t\n");
    }
}