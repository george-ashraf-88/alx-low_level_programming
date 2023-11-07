#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return NULL;

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL) {
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return NULL;
	}

	newDog->age = age;

	return newDog;
}

int main(void) {
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");

	if (my_dog != NULL)
	{
		printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
	}
	else {
		printf("Failed to create the dog.\n");
	}

	return (0);
}

