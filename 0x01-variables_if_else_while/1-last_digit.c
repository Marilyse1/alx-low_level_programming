#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
/*main description*/
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is ", n);
	if (m > 5)
		printf("%d and is greater than 5\n", m);
	else if (m == 0)
		printf("%d and is 0\n", m);
	else
		printf("%d and is less than 6 and not 0\n", m);

	return (0);
}
