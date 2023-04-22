#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	/* main description */
	char c;

	/* Print lowercase alphabet */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* Print uppercase alphabet */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
