#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 * Return: The modified string with all words capitalized.
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";
	int is_separator = 0;

	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (i == 0 || str[i - 1] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
