#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints the first 50 Fibonacci numbers,
* separated by commas and
*              followed by a space, and ending with a new line.
*
* Return: 0 (Success)
*/
int main(void) {
unsigned long int n = 50; /* Number of Fibonacci numbers to generate */
unsigned long int a = 1, b = 2, c, i; /* Starting values of Fibonacci sequence */

/* Print the first two Fibonacci numbers*/
printf("%lu, %lu, ", a, b);

/* Generate and print the rest of the Fibonacci numbers */
for (i = 3; i <= n; i++) {
c = a + b;
printf("%lu", c);
if (i < n) {
printf(", ");
}
a = b;
b = c;
}

printf("\n");

return (0);
}
