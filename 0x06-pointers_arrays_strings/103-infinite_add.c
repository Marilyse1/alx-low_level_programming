#include <stdio.h>
#include <string.h>


/**
* infinite_add - Adds two numbers 
* stored as strings.
* @n1: The first number to be added.
* @n2: The second number to be added.
* @r: Pointer to the buffer where the 
* result will be stored.
* @size_r: The size of the buffer.
*
* Return: If the sum can be stored in r,
* return a pointer to r.
*         If the sum cannot be stored 
* in r or if size_r < 1, return 0.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0, sum = 0;
int i, j, k;

if (len1 + len2 > size_r)
return 0;

for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[k] = (sum % 10) + '0';
}

if (k == 0)
r[k++] = '0';

r[k] = '\0';

for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}

return (r);
}
