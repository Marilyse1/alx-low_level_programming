#include <stdio.h>

/**
* _print_rev_recursion - Imprime une chaîne de caractères à l'envers
* @s: Pointeur vers la chaîne de caractères à imprimer
*
* Retour: void
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);

putchar(*s);
}
