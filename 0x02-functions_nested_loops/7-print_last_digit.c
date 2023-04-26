#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @n: The number to print the last digit of
*
* Return: The value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;

/* Get the last digit by taking remainder with 10 */
last_digit = n % 10;

/* If the last digit is negative, make it positive */
if (last_digit < 0)
{
last_digit = -last_digit;
}

/* Print the last digit */
_putchar('0' + last_digit);

/* Return the value of the last digit */
return (last_digit);
}
