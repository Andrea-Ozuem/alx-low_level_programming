#include <stdio.h>
#include "dog.h"

int main(void)
{
	    dog_t my_dog;
		my_dog.age = 8;
		my_dog.name = "Manuel";
			my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
			        return (0);
}
