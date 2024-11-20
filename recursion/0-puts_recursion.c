#include "main.h"
/**
 * _puts_recursion - Recursively prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Description:
 * This function takes a string and prints each character one by one
 * using recursion. It stops when it encounters the null terminator '\0',
 * at which point it prints a new line character.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
