#include "main.h"

/**
 * helper_sqrt - Helper function to find square root recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n or -1 if no natural square root exists.
 */
int helper_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
		return (helper_sqrt(n, guess + 1));
	}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_sqrt(n, 0));
}
