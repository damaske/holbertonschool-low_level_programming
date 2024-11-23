#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc and initializes it to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * 
 * Return: A pointer to the allocated memory, or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *som;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	som = malloc(nmemb * size);
	
	if (som == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)som)[i] = 0;
	}
	return (som);
}
