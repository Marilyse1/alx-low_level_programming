#include <stdio.h>

/**
* _strlen_recursion - Calculates the length of a string recursively
* @s: Pointer to the string
*
* Return: The length of the string (excluding the terminating null byte)
*/
int _strlen_recursion(char *s)
{
/* Base case: if we reach the end of the string, return 0 */
if (*s == '\0')
return (0);

/*
* Recursive call with the next character
* and return 1 plus the length of the substring
*/
return (1 + _strlen_recursion(s + 1));
}
