#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings separated by a specified string.
* @separator: The string to be printed between the strings.
* @n: The number of strings passed to the function.
*
* Description:
* This function takes a variable number of arguments, which are
* strings, and prints them one by one, separated by the specified
* separator string. If the separator is NULL, it is not printed.
* If a string is NULL, it prints (nil) instead. A new line is
* printed at the end of the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;  /* Declare an argument list */
unsigned int i;
char *str;

va_start(args, n);  /* Initialize the argument list */

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);  /* Get the next argument of type char */

if (str != NULL)
printf("%s", str);  /* Print the string */
else
printf("(nil)");  /* Print (nil) if the string is NULL */

if (separator != NULL && i < n - 1)
printf("%s", separator);  // Print the separator if it is not NULL and it's not the last string
}

printf("\n");  /* Print a new line at the end of the function */

va_end(args);  /* Clean up the argument list */
}
