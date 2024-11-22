#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments).
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
}
