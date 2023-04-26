#include <stdio.h>

/**
* main - Entry point for the program
*
* Description: This is the main function that serves as the entry point for
* the program. It calculates the sum of even-valued terms in the Fibonacci
* sequence whose values do not exceed 4,000,000 and prints the result.
*
* Return: 0 on success
*/
int main(void)
{
unsigned long int n = 4000000; /* Maximum value in Fibonacci sequence */
unsigned long int a = 1, b = 2, c;
unsigned long int sum = 0;

while (a <= n)
{
if (a % 2 == 0)
sum += a;

c = a + b;
a = b;
b = c;
}

printf("%lu\n", sum);

return (0);
}
