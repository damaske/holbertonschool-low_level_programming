#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing characters to be matched.
 *Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *s == *accept; i++)
		{
			return (i);
		}

		else
		{
			return (i);
		}
	}
}
