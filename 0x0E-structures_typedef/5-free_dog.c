#include "dog.h"
/**
 * free_dog - frees a dog structure
 *
 * @d: pointer to struct to free
 *
 * Return: always void
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			free(d->name);
		if (d->owner != 0)
			free(d->owner);
		free(d);
	}
}
