#include <stdio.h>

/**
* print_rev - prints a string in reverse,
* followed by a new line
* @s: the string to be printed in reverse
*/
void print_rev(char *s)
{
int len = 0;
if (s == NULL)
return;

while (s[len] != '\0')
len++;

for (int i = len - 1; i >= 0; i--)
putchar(s[i]);

putchar('\n');
}
