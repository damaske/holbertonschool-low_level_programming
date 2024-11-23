#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Createsanarrayofcharsand initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: Pointer to the array, or NULL ifsizeis 0 or memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		array[i] = c;
		return (array);
	}
}
