#include <stdio.h>

/**
* _strlen_recursion - Calcule la longueur d'une chaîne de caractères
* @s: Pointeur vers la chaîne de caractères
*
* Retour: La longueur de la chaîne de caractères
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
