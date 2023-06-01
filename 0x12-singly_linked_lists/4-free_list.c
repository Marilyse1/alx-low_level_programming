#include "lists.h"
#include <stdlib.h>

/**
* free_list - Libère une liste_t
* @head: Pointeur vers la tête de la liste
*
* Return: void
*/
void free_list(list_t *head)
{
list_t *current, *temp;

current = head;

while (current != NULL)
{
temp = current;
current = current->next;
free(temp->str);
free(temp);
}
}
