#include "dog.h"


/**
 * init_dog - initializes a structure of type dog.
 * @d: the pointer to structure.
 * @name: the pointer to the name of the dog.
 * @age: the age of the dog.
 * @owner: the pointer to the owner of dog.
 *
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
