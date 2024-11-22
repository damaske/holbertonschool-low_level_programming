#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector (unused in this program).
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}