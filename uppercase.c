# include <stdio.h>
#include  <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("before: ");
    printf("after: ");
    for (int i = 0; i < strlen(s); i++)
    {
        {
            printf("%c", toupper(s[i]));
        }

    }
     printf("\n");
}