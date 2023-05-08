#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0, k = i; needle[j] != '\0'; j++, k++)
{
if (haystack[k] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}

return (NULL);
}
