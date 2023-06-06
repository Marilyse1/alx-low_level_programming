#include "lists.h"
#include <stddef.h>


/**
* free_listint2 - Libère une liste chainée
* @head: Pointeur vers le pointeur de la tête de liste
*
* Description :
* Cette fonction libère la mémoire occupée par chaque nœud
* d'une liste chainée de type listint_t. Elle met également le
* pointeur de tête à NULL.
*/
void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
