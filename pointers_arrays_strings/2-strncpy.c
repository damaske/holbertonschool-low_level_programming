#include "main.h"
/**
 * _strncpy - Copies up to n characters from the string src to dest.
 * @dest: The destination string, must have enough space to hold the result.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 * This function copies uptoncharacters from the src string to the dest string.
 * If the length ofsrcislessthan n, the remaining characters in dest will be
 * padded with null bytes.
 * Return: A pointer to the destination string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
