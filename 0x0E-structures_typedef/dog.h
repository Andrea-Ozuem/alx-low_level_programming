#ifndef MAIN_H
#define MAIN_H

/**
  *struct dog - structure for a dog data
  *@name: dog name
  *@age: dog age
  *@owner: onwner of dog
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
