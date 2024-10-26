#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowc =  'a';
	int uppc =  'A';

	while (lowc <= "z")
	{
		putchar(lowc);
		lowc++;
	}
	while (uppc <= "Z")
	{
		putchar(uppc);
		uppc++;
	}
	putchar('\n');
	return (0);
}
