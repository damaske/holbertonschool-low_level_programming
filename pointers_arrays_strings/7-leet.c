#include "main.h"
/**
 * leet - encode string to 1337
 * @str: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i = 0;
	char *r = str;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (r);
}
