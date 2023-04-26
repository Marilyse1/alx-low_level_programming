#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints the first 50 Fibonacci numbers, separated by commas and
*              followed by a space, and ending with a new line.
*
* Return: 0 (Success)
*/
int main(void) {
int n = 50; // Number of Fibonacci numbers to generate
unsigned long long int a = 1, b = 2, c; // Starting values of Fibonacci sequence

// Print the first two Fibonacci numbers
printf("%llu, %llu, ", a, b);

// Generate and print the rest of the Fibonacci numbers
for (int i = 3; i <= n; i++) {
c = a + b;
printf("%llu", c);
if (i < n) {
printf(", ");
}
a = b;
b = c;
}

printf("\n");

return 0;
}
