#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate to s1.
 * Return: A pointer to the newly allocated memory containing
 * the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, k;
	char *rem;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while  (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	rem = malloc(sizeof(char) * (len1 + n + 1));
	if (rem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		rem[i] = s1[i];
	}
	for (k = 0; k < n; k++)
	{
		rem[i + k] = s2[k];
	}
	rem[i + k] = '\0';
	return (rem);
}
