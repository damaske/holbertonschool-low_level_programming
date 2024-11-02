#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14, ten times, followed by a newline
 */

void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		int n = 0;

		while (n <= 14)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
