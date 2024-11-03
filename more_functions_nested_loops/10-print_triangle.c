#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (k = 0; k < size; k++)
		{
			for (i = 0; i < (size - k - 1); i++)
			{
				_putchar(' ');
			}
			for (i = 0; i <= k; i++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
