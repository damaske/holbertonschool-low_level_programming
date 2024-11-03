#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	int orig, rev;
	char vedro;

	while (s[length] != '\0')
	{
		length++;
	}

	orig = 0;
	rev = length - 1;

	while (orig < rev)
	{
		vedro = s[orig];
		s[orig] = s[rev];
		s[rev] = vedro;

		orig++;
		rev--;
	}
}
