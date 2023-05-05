#include "main.h"

/**
* _isupper - Vérifie si un caractère est 
* une lettre majuscule en utilisant la
* table ASCII.
* @c: Le caractère à vérifier
*
* Return: 1 si le caractère est une 
* lettre majuscule, 0 sinon.
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
