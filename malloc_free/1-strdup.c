#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str:String to be copied
 * Return: NULL in case of error, pointer to allocated
 * space
 */
char *_strdup(char *str)
{
	char *some;
	int i, k;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[k] != '\0')
	{
		k++;
	}

	some = malloc(sizeof(char) * (k + 1));

	for (i = 0; i < k ; i++)
	{
		some[i] = str[i];
	}

	some[i] = '\0';
	return (some);
}

