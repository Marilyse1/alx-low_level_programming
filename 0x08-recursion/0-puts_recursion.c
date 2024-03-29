#include <stdio.h>

/**
* _puts_recursion - Prints a string recursively, followed by a new line
* @s: Pointer to the string to be printed
*
* Return: void
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}

putchar(*s);
_puts_recursion(s + 1);
}
