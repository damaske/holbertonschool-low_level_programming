#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 * Return: The modified string with all words capitalized.
 */

char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";
	int j = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i - 1] == separators[j])
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						str[i] -= 32;
					}
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
