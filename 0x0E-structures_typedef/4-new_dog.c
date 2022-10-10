#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - creates a new fog
  *@name: name
  *@age: age 
  *@owner: of dog
  *Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, newname, newowner;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL || !name || !owner)
	{
		free(n_dog);
		return (NULL);
	}
	for (newname = 0; name[newname]; newname++)
		;
	for (newowner = 0; owner[newowner]; newowner++)
		;
	
	n_dog->name = malloc(newname + 1);
	n_dog->owner = malloc(newowner + 1);
	if (!n_dog->name || !n_dog->owner)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	n_dog->age  = age;

	for (i = 0; i < newname;i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	for (i = 0; i < newowner; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';

	return (n_dog);
}
