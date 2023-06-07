#include "lists.h"
#include <stddef.h>

/**
* find_listint_loop - Trouve la boucle dans une liste chaînée
* @head: Pointeur vers le premier élément de la liste
*
* Return: Adresse du nœud où la boucle commence,
* ou NULL s'il n'y a pas de boucle
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
fast = head;

while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

return (slow);
}
}

return (NULL);
}
