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

	/* Print lowercase alphabet excluding q and e */
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
