/**
* factorial - Calculates the factorial of a number
* @n: The number
*
* Return: The factorial of the number, or -1 if an error occurs
*/
int factorial(int n)
{
/* Base case: factorial of 0 is 1 */
if (n == 0)
return (1);

/* Check for invalid input (negative number) */
if (n < 0)
return (-1);

/* Recursive call to calculate factorial */
return (n * factorial(n - 1));
}
