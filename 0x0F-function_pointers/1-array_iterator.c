#include <stdio.h>

/**
* array_iterator - Exécute une fonction
* donnée sur chaque élément d'un tableau.
* @array: Le tableau d'entiers.
* @size: La taille du tableau.
* @action: Le pointeur vers la fonction à exécuter.
*
* Description :
* Cette fonction prend un tableau d'entiers,
* sa taille et un pointeur
* vers une fonction en paramètres.
* Elle itère sur chaque élément du tableau
* et appelle la fonction donnée
* en paramètre sur chaque élément.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
