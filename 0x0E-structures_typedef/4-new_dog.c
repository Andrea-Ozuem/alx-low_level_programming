#include "dog.h"

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

	new_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}

