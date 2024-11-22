#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the name of the program.
 * @argc: Argument count (not used in this program).
 * @argv: Argument vector (array of strings containing the arguments).
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
