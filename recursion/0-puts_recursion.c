#include "main.h"
#include <stdio.h>
#include <stddef.>
/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (s == NULL) {
		return;
	}
	if (*s == '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
