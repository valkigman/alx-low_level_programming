#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to an element of type dog
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
