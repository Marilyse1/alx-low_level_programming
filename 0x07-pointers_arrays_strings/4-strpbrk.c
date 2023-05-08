#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to string to search in
* @accept: pointer to string of bytes to match
*
* Return: pointer to the byte in s that matches one
* of the bytes in accept,
*         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s)
{
for (p = accept; *p; p++)
{
if (*p == *s)
return (s);
}
s++;
}
return (NULL);
}
