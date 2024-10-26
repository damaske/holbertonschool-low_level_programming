#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowc =  'a';

	while (lowc <= 'z')
	{
		if (lowc != 'q' && lowc != 'e')
		putchar(lowc);
		lowc++;
	}
	putchar('\n');
	return (0);
}
