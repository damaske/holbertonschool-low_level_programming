#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square of '#' characters, followed by a new line
 * @size: The size of the square (both width and height)
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, k;

		for (k = 0; k < size; k++)
		{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
			_putchar('\n');
		}
	}
}
