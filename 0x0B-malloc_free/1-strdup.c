#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a
* new string which is a duplicate of the
*           string str.
* @str: the string to duplicate.
*
* Return: On success, a pointer
* to the duplicated string.
*         NULL if insufficient
* memory was available or if str is NULL.
*/
char *_strdup(char *str)
{
char *dup_str;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup_str = malloc(sizeof(char) * (len + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup_str[i] = str[i];

return (dup_str);
}
