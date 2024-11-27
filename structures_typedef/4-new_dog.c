#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the new dog_t, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[strlen(name)] = '\0';
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; owner[i] != '\0'; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[strlen(owner)] = '\0';
	new_dog->age = age;

	return (new_dog);
}
