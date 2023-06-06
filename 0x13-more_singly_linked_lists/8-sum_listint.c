#include "lists.h"
#include <stddef.h>

/**
* sum_listint - Returns the sum of all the data (n) of a listint_t linked list
* @head: Pointer to the head of the linked list
*
* Return: The sum of all the data (n) values, or 0 if the list is empty
*
* Description:
* This function traverses a listint_t linked list and calculates the sum
* of all the data (n) values in the list. If the list is empty, it returns 0.
*/
int sum_listint(listint_t *head)
{
listint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
