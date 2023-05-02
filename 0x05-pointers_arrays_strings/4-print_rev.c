#include <stdio.h>
#include "main.h"

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: pointer to the string to be printed
*/
void print_rev(char *s)
{
int i = 0;

while (s[i])
{
i++;
}

while (i > 0)
{
_putchar(s[--i]);
}

_putchar('\n');
}
