#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string.
*
* @s: The string to be reversed.
*/
void rev_string(char *s)
{
int len = 0, i;
char tmp;

/* Determine the length of the string */
while (*(s + len))
len++;

/* Swap characters from beginning and end of string */
for (i = 0; i < len / 2; i++)
{
tmp = *(s + i);
*(s + i) = *(s + len - i - 1);
*(s + len - i - 1) = tmp;
}
}
