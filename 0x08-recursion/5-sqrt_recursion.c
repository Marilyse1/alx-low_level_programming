#include "main.h"

/**
* _sqrt_recursion - Calculates the
* natural square root of a number
* @n: The number
*
* Return: The natural square root of n, or -1
* if it doesn't have a natural square root
*/
int _sqrt_recursion(int n)
{
/* Check for invalid input (negative number) */
if (n < 0)
return (-1);

/* Base case: square root of 0 is 0 */
if (n == 0)
return (0);

/* Recursive call to find the square root */
return (sqrt_helper(n, 1));
}



/**
* sqrt_helper - Helper function
* to find the square root recursively
* @n: The number
* @x: The current guess for the square root
*
* Return: The square root of n, or -1
* if it doesn't have a natural square root
*/
int sqrt_helper(int n, int x)
{
/* Base case: found the square root */
if (x * x == n)
return (x);

/*
* If x*x is greater than n, it means
* there's no natural square root
*/
if (x * x > n)
return (-1);

/* Recursive call with an increased guess */
return (sqrt_helper(n, x + 1));
}
