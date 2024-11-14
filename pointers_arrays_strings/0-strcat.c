#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string,must have enough space to holdtheresult.
 * @src: The source string to be appended to dest.
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds
 * a new terminating null byte.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *result;
	int dest_len = 0;
	int src_len = 0;
	int i, j;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (i = 0; i < dest_len + src_len; i++)
	{
		result[i] = dest[i];
	}

	for (j = 0; j < src_len; j++, i++)
	{
		result[i] = src[j];
	}
	result[i] = '\0';
	return (result);
}
