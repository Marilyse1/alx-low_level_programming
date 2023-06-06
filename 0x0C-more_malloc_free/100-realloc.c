#include <stdlib.h>
#include <string.h>

/**
* _realloc - Réalloue un bloc mémoire en utilisant malloc et free
* @ptr: Pointeur vers le bloc mémoire précédemment alloué
* @old_size: Taille en octets de l'espace mémoire alloué pour ptr
* @new_size: Nouvelle taille en octets du nouveau bloc mémoire
*
* Return: Pointeur vers le nouveau bloc mémoire alloué, ou NULL en cas d'échec
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

void *new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}

unsigned int min_size = old_size < new_size ? old_size : new_size;
memcpy(new_ptr, ptr, min_size);
free(ptr);

return (new_ptr);
}
