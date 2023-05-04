#include "main.h"


/**
* leet - encodes a string into 1337
* @s: the string to encode
*
* Return: a pointer to the resulting string
*/
char *leet(char *s)
{
int i, j;
char *letters = "aeotlAEOTL";
char *numbers = "43071043";

for (i = 0; s[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}

return (s);
}
