#include "main.h"

/**
* rot13 - Encodes a string using rot13.
*
* @s: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/

char *rot13(char *s)
{
int i, j;
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == rot[j])
{
s[i] = j < 26 ? 'A' + j : 'a' + j - 26;
break;
}
}
}
return (s);
}
