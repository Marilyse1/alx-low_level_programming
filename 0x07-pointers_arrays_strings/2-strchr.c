#include "main.h"

/**
* _strchr - locate character in a string
* @s: pointer to the string
* @c: character to search for
*
* This function returns a pointer to the
* first occurrence of the character c
* in the string s, or NULL if the
* character is not found.
*
* Return: a pointer to the first
* occurrence of the character c
* in the string s,
*    or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);

return (NULL);
}
