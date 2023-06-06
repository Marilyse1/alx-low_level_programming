#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index - Inserts a new
* node at a given position in a listint_t linked list
* @head: Pointer to the head of the linked list
* @idx: Index where the new node should be inserted
* @n: Value to be assigned to the data (n) member of the new node
*
* Return: The address of the new node, or NULL if it failed
*
* Description:
* This function inserts a new node
* with the given value (n) at the specified index
* in a listint_t linked list.
* The index starts at 0. If the insertion is not possible
* (e.g., the index is out of range),
* the function does not add the new node and returns NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;

if (head == NULL)
return (NULL);

/* Create a new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* Special case: Insert at the beginning */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

/* Traverse the list to find the previous node of the desired index */
current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

/* Check if the index is out of range */
if (current == NULL)
{
free(new_node);
return (NULL);
}

/* Insert the new node */
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
