#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 * Return: A pointer to the allocated memory.
 * If malloc fails, the process terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
	char *som;

	som = malloc(b);

	if (som == NULL)
	{
		exit(98);
	}
	return (som);
}
