#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string followed by a new line.
* @str: the string to print.
*
* Return: void.
*/
void puts_half(char *str)
{
int i, len, n;

len = 0;
while (str[len] != '\0')
len++;

if (len % 2 == 0)
n = len / 2;
else
n = (len / 2) + 1;

for (i = n; i < len; i++)
putchar(str[i]);

putchar('\n');
}
