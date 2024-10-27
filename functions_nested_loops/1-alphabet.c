#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 * This function prints all lowercase letters followed by a new line.
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
