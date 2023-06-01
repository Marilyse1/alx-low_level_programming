#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - Ajoute un nouveau nœud à la fin d'une liste
* @head: Pointeur vers le pointeur de tête de la liste
* @str: Chaîne à dupliquer et à attribuer au nouveau nœud
*
* Return: Adresse du nouveau nœud, ou NULL en cas d'échec
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(new_node->str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;
}

return (new_node);
}
