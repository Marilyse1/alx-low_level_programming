#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates two strings
* @s1: The first string
* @s2: The second string
* @n: The maximum number of bytes
* from s2 to concatenate
*
* Return: Pointer to the newly allocated
* memory containing the concatenated string
*         NULL if memory allocation fails
* or if s1 and s2 are both NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int s1_len, s2_len, concat_len, i, j;

s1 = (s1 != NULL) ? s1 : "";
s2 = (s2 != NULL) ? s2 : "";

s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
concat_len = s1_len + s2_len;
else
concat_len = s1_len + n;

concat = malloc(sizeof(char) * (concat_len + 1));

if (concat == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
concat[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++)
concat[i++] = s2[j];

concat[i] = '\0';

return (concat);
}
