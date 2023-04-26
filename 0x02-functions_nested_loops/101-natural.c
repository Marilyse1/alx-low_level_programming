#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Computes the sum of all multiples
* of 3 or 5 below 1024 (excluded)
*              and prints the result.
*
* Return: 0 (Success)
*/
int main(void)
{
int i, sum = 0; /* Variable to store the sum */

/* Loop through all numbers below 1024 */
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;/* Add the current number to the sum */
}

/* Print the sum */
printf("%d\n", sum);

return (0);
}
