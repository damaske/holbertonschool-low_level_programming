#include "main.h"
/**
 * array_range - Creates an array of
 * integers from min to max, inclusive.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 * Return: Pointer to the newly allocated array, or NULL if failure.
 */
int *array_range(int min, int max)
{
	int *som;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	som = malloc(sizeof(int) * size)

	if (som == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		som[i] = min++;
	}
	return (som);
}
