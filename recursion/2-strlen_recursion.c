#include "main.h"
/**
 * _strlen_recursion - Computes the length of a string using recursion.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if  (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
