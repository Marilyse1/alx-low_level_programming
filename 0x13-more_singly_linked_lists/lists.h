#ifndef LISTS_H
#define LISTS_H

/* Structure for a singly-linked list of integers */
typedef struct listint_s
{
int n;                 /* Data of the node */
struct listint_s *next;/* Pointer to the next node */
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
