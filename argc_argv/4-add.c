#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments).
 *
 * Return: 0 on success, 1 if any argument is invalid.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *ptr;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (ptr = argv[i]; *ptr != '\0'; ptr++)
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
