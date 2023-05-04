#include <stdio.h>

/**
* main - prints the value of a[2]
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a[5];
int *p;

a[2] = 98;
p = &a[2];

/* add one line of code here */
printf("a[2] = %d\n", *(p));

return (0);
}
