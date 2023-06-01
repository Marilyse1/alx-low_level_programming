#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Définition de la structure list_t */
typedef struct list_s
{
char *str;
size_t len;
struct list_s *next;
} list_t;

/* Prototypes des fonctions */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
