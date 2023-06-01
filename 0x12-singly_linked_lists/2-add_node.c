#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be duplicated and stored in the new node.
*
* Return: Address of the new element (new node), or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

while (str[len])
		len++;

new_node->str = strdup(str);
new_node->len = len;
new_node->next = *head;

*head = new_node;

return (new_node);
}
