#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* pop_listint - Supprime le nœud de tête d'une liste chainée
* @head: Pointeur vers le pointeur de la tête de liste
*
* Return: La valeur du nœud de tête supprimé, ou 0 si la liste est vide
*
* Description :
* Cette fonction supprime le nœud de tête d'une liste chainée de type
* listint_t et renvoie la valeur (n) de ce nœud. Si la liste est vide,
* elle renvoie 0.
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);

return (data);
}
