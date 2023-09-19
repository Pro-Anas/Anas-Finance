#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
   string name;
   string number;
}
person;

int main(void)
{
   person people[2];

   people[0].name = "Anas";
   people[0].number = "966+ 505379004";

   people[0].name = "Khaled";
   people[0].number = "966+ 569316898";


int main(void);

   string name = get_string ("Name ");
   for (int i = 0; i < 2; i++)
   {
     if (strcmp(people[i].name, name) == 0)
     {
        printf ("Found %s\n", people[i].number);
        return 0;
     }

   }
   printf("Not Found\n");
   return 1;
}