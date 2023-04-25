#include "main.h"

/* Définition de la fonction print_alphabet */
void print_alphabet(void)
{
	/* Affiche l'alphabet en minuscules suivi d'un saut de ligne */
	char c;
	for (c = 'a'; c <= 'z'; c++) {
		_putchar(c);
	}
	_putchar('\n');
}
