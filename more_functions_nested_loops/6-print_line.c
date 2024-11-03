#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of underscores based on the value of n
 * @n: Number of underscores to print
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n')

	else
		(n > 0)

	{
		for (i = 0; i <= n; i++)
		_putchar('_');

		_putchar('\n');
	}
}
