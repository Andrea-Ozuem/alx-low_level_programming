#include "dog.h"

/**
  *init_dog - initialises struct dog members
  *@d: struct
  *@name: name
  *@age: age
  *@owner: of dog
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
