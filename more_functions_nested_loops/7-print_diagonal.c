#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');
		_putchar('\\');

		_putchar('\n');
	}
}
