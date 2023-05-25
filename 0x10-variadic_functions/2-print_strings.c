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
va_list args;
unsigned int i;
char *str;

/* Initialize the argument list */
va_start(args, n);

/* Get the next argument of type char */
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (separator != NULL && i < n - 1)
printf("%s", separator);

}

printf("\n");

va_end(args);
}
