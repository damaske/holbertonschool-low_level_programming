#include "main.h"
/**
  * _strcmp - Compare two strings
  * @s1: The first string
  * @s2: The second string
  * Return:0 if the strings are equal.
  * A negative value if the first string is less than the second string.
  * A positive value if the first string is greater than the second string.
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return ((int)s1[i] - (int)s2[i]);
}
