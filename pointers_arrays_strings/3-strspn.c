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
	unsigned int i;
	unsigned int count = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
		}

		if (accept[i] == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
