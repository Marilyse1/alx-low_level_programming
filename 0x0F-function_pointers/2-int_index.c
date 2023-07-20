#include <stdio.h>

/**
* int_index - Recherche un entier dans un tableau.
* @array: Le tableau d'entiers.
* @size: Le nombre d'éléments dans le tableau.
* @cmp: Le pointeur vers la fonction de comparaison.
*
* Description :
* Cette fonction prend un tableau d'entiers,
* le nombre d'éléments
* dans le tableau et un pointeur vers
* une fonction de comparaison
* en paramètres. Elle recherche
* le premier élément du tableau pour
* lequel la fonction de comparaison
* ne retourne pas 0. Elle renvoie
* l'index de cet élément.
* Si aucun élément ne correspond,
* la fonction renvoie -1.
* Si la taille est inférieure ou égale à 0,
* la fonction renvoie -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
