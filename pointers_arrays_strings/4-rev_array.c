#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
