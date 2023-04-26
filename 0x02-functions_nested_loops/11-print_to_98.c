#include "main.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: Starting number
*/
void print_to_98(int n)
{
int i;

/* Check if n is greater or lesser than 98 */
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
/* Print current number */
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');

/* Print comma and space if not last number */
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
/* Print current number */
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');

/* Print comma and space if not last number */
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}

/* Print newline at the end */
_putchar('\n');
}
