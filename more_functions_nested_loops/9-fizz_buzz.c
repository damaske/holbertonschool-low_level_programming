#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:Prints numbers from 1to100, replacing multiples of 3 with "Fizz"
 * multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".
 * Return: 0 on success
 */

int  main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if  (n % 15 == 0)
		{
			printf("FizzBuzz\n");
		else
		{
			printf("%d\n", n);
		}

	}
}
