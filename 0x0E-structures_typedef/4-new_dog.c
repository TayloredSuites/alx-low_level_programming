#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: pointer to the dogs name
 * @age: the float for dog age
 * @owner: pointer to value of the owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fresh_dog;

	fresh_dog = malloc(sizeof(dog_t));
