#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the bytes to match.
 *
 * Return: Apointertothe byte in `s` that matches one of the bytes in `accept`,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; *accept != '\0'; i++)
		{
			if (*accept == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
