// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <strings.h>
#include <string.h>
#include <stdio.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 100000;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int hash_value = [hash_value];

    while (n !=NULL)
    {
        if(strcasecmp(word, n->word) == 0)
        {
            return true;
        }
        n = n->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
     long sum = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        sum += tolower(word[i]);
    }
    return sum % N
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
   FILE *file = fopen(dictionary, "r");
   if (file == NULL)
   {
    return false;
   }

   char next_word[LENGTH + 1];

   while(fscanf(file,"%s", next_word)!= EOF)
   {
    node *new_node = mallox(sizeof(node));
    if (new_node == NULL)
    {
        return false;
    }

    strcpy(new_node ->word, next_word);

    int hash_value = hash(next_word);

    new_node->next = table[hash_value];

    table[hash_value] = new_node;
    word_count++;
    
   }
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
