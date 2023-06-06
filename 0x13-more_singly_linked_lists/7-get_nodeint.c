#include "lists.h"
#include <stddef.h>

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list
* @head: Pointer to the head of the linked list
* @index: Index of the node to retrieve
*
* Return: Pointer to the nth node, or NULL if the node doesn't exist
*
* Description:
* This function returns a pointer to the node at the specified index
* in a listint_t linked list. The index starts at 0. If the node
* doesn't exist (i.e., the index is out of range), it returns NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}

return (NULL);
}
