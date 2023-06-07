#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>



/**
* print_listint_safe - Imprime une
* liste chaînée de manière sécurisée
* @head: Pointeur vers le premier élément de la liste
*
* Return: Nombre de nœuds dans la liste
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *loop_node = NULL;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

/* Vérifier si le nœud courant pointe vers un nœud précédent */
if (current->next >= current)
{
loop_node = current->next;
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
break;
}

current = current->next;
}

if (loop_node != NULL)
/* La liste contient une boucle, arrêter le programme */
exit(98);

return (count);
}
