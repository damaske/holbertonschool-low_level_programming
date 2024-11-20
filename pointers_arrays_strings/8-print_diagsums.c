#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix (storedasa1Darray).
 * @size: The size of the square matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int sumdiag1 = 0;
	int sumdiag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumdiag1 = sumdiag1 + a[i * size + i];
		sumdiag2 = sumdiag2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
