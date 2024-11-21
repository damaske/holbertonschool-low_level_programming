#include "main.h"
/**
 * is_prime_number - Determines if a number is a prime number.
 * @n: The number to check.
 *
 * Description: This function checks if the input integer is a prime number.
 * It returns 1 if the number is prime, otherwise it returns 0.
 *
 * Return: 1 if `n` is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime_helper(n, i + 1));
}

int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (is_prime_helper(n, 2));
}

