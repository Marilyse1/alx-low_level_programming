#include <stdio.h>

/**
* main - Entry point for the program
*
* Description: This is the main function that finds and prints the first 98
* Fibonacci numbers, starting with 1 and 2, separated by commas and followed
* by a new line.
*
* Return: 0 on success
*/
int main(void)
{
unsigned long long int a = 1; /* First Fibonacci number */
unsigned long long int b = 2; /* Second Fibonacci number */
unsigned long long int c;     /* Current Fibonacci number */
int i;     /* Loop counter */

printf("%d, %d, ", a, b); /* Print the first two Fibonacci numbers */

for (i = 3; i <= 98; i++)
{
c = a + b;             /* Calculate the next Fibonacci number */
printf("%d", c);      /* Print the current Fibonacci number */
if (i < 98)           /* If not the last number, print comma and space */
printf(", ");
a = b;                /* Update a to be the current b */
b = c;                /* Update b to be the current c */
}

printf("\n"); /* Print a new line at the end */

return (0);
}
