#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 * Return: The modified string with all words capitalized.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; srt[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				continue;
			}

			if (str[i] == ' ')
			{
				++i;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
					continue;
				}
			}

			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] = str[i] + 32;
				}
			}
		}
	}
}
