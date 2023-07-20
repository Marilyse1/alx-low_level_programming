#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Imprime des nombres
* séparés par une chaîne spécifiée.
* @separator: La chaîne à imprimer entre les nombres.
* @n: Le nombre d'entiers passés à la fonction.
*
* Description : 
* Cette fonction prend un nombre variable d'arguments et les
* imprime un par un, séparés par la chaîne de séparation
* spécifiée. Si le séparateur est NULL, il n'est pas imprimé.
* Une nouvelle ligne est imprimée à la fin de la fonction.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list args;/* Déclare une liste d'arguments variables */
unsigned int i;

va_start(args, n);/* Initialise la liste d'arguments variables */

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));/* Récupère et imprime l'argument de type int */

if (separator != NULL && i < n - 1)
printf("%s", separator);/* Imprime le séparateur s'il n'est pas NULL et que ce n'est pas le dernier nombre */
}

printf("\n");/* Imprime une nouvelle ligne à la fin de la fonction */

va_end(args);/* Termine l'utilisation de la liste d'arguments variables */
}
