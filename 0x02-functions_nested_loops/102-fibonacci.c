#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints the first 50 Fibonacci numbers, separated by commas and
*              followed by a space, and ending with a new line.
*
* Return: 0 (Success)
*/
int main(void)
{
int num1 = 1;   /* First Fibonacci number */
int num2 = 2;   /* Second Fibonacci number */
int temp, i;       /* Temporary variable to store the sum of num1 and num2 */

/* Print the first two Fibonacci numbers */
printf("%d, %d", num1, num2);

/* Print the remaining 48 Fibonacci numbers */
for (i = 3; i <= 50; i++) {
temp = num1 + num2;        /* Calculate the sum of num1 and num2 */
printf(", %d", temp);     /* Print the sum separated by a comma and a space */
num1 = num2;              /* Update num1 with the value of num2 */
num2 = temp;             /* Update num2 with the value of the sum */
}
printf("\n"); /* Print a new line after the numbers */

return (0);
}
