#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowc =  'z';

	while (lowc >= 'a')
	{
		putchar(lowc);
		lowc--;
	}
	putchar('\n');
	return (0);
}
