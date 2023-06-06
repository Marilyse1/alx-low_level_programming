#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes the node
* at the given index of a listint_t linked list
* @head: Pointer to the head of the linked list
* @index: Index of the node to be deleted
*
* Return: 1 if the deletion succeeded, -1 if it failed
*
* Description:
* This function deletes the node at the
* specified index in a listint_t linked list.
* The index starts at 0. If the deletion is
* not possible (e.g., the index is out of range),
* the function returns -1. Otherwise, it deletes the node and returns 1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *previous;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

/* Special case: Delete the first node */
if (index == 0)
{
current = *head;
*head = (*head)->next;
free(current);
return (1);
}

current = *head;
previous = NULL;

/* Traverse the list to find the node at the desired index */
for (i = 0; i < index && current != NULL; i++)
{
previous = current;
current = current->next;
}

/* Check if the index is out of range */
if (current == NULL)
return (-1);

/* Update the previous node's next pointer */
previous->next = current->next;
free(current);

return (1);
}
