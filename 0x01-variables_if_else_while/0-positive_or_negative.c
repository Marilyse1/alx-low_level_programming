#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Ce programme génère un nombre aléatoire et affiche s'il est positif, nul ou négatif */
int main(void)/* Ce programme génère un nombre aléatoire et affiche s'il est positif, nul ou négatif */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
