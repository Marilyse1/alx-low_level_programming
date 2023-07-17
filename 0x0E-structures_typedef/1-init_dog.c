#include <stddef.h>
#include "dog.h"

/**
* init_dog - Initializes a variable
* of type struct dog
* @d: Pointer to the struct dog variable
* to be initialized
* @name: Pointer to a string to set as
* the dog's name
* @age: Age to set for the dog
* @owner: Pointer to a string to set
* as the dog's owner
*
* Description: This function initializes
* the members of the struct dog
* variable pointed to by @d with the
* provided values @name, @age, and @owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
