#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string,must have enough space to holdtheresult.
 * @src: The source string to be appended to dest.
 * @n - bytes from src.
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds
 * a new terminating null byte.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0' && scr_len < n)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
