#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to locate in haystack.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*start == *sub && *sub != '\0')
		{
			start++;
			sub++;
		}
		if (*sub == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
