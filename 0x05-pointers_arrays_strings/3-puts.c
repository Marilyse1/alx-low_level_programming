#include "main.h"

/**
* _puts - prints a string to stdout, followed by a newline character
* @str: pointer to the string to be printed
*
* Return: void
*/

#include <stdio.h>

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}

putchar('\n');
}
