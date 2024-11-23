#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using calloc and sets it to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *som = calloc(nmemb, size);

	return (som);
}
