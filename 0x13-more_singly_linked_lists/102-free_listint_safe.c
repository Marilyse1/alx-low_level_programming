#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
* free_listint_safe - Libère une liste listint_t
* @h: Pointeur vers le pointeur
* du premier élément de la liste
*
* Return: Le nombre d'éléments
* de la liste qui ont été libérés
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current;
listint_t *next;
size_t count = 0;

if (h == NULL)
return (0);

current = *h;

while (current != NULL)
{
next = current->next;

if (current < next)
{
free(current);
count++;
}
else
{
break;
}

current = next;
}

*h = NULL;

return (count);
}
