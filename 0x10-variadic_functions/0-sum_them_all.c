#include <stdarg.h>

/**
* sum_them_all - Calcule la somme de ses arguments.
* @n: Le nombre d'arguments à additionner.
*
* Description : 
* Cette fonction calcule la somme de tous ses paramètres.
* Si le nombre d'arguments est égal à zéro, elle retourne zéro.
* Utilise la bibliothèque <stdarg.h> pour prendre en compte
* les arguments variables.
*
* Return: La somme des arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;   /* Liste d'arguments variables */
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);   /* Initialisation de la liste d'arguments */

for (i = 0; i < n; i++)
sum += va_arg(args, int);   /* Ajoute chaque argument à la somme */

va_end(args);   /* Nettoyage de la liste d'arguments */

return (sum);
}
