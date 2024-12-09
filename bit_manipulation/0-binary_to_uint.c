#include "main.h"
#include <stdlib>
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (NULL);
	for (; b != "\0"; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
