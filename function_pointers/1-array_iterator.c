#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function for each element of an array.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each array element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0, i < size, i++)
	{
		action(array[i]);
	}
}
