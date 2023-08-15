#include<stdlib.h>
#include"dog.h"

/**
 * free_dog - free memory allocated to dog
 * @d: pointer to dog structure
 *
 * Return: freed memory
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);

}
