#include <stdio.h>

/**
* print_name - Imprime un nom
* en utilisant une fonction de rappel.
* @name: Le nom à imprimer.
* @f: Le pointeur vers la fonction de rappel.
*
* Description : Cette fonction prend un
* nom et une fonction de rappel en paramètres.
* Elle appelle la fonction de rappel en
* passant le nom en argument, ce qui
* permet à la fonction de rappel de
* déterminer comment le nom sera imprimé.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
