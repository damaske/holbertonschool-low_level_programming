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
		putchar(lowc);
		lowc++;
	}
	putchar('\n');
	return (0);
}
