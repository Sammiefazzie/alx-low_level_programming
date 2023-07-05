#include "main.h"

int exact_prime(int n, int i);

/**
 * is_prime_number - Return if integer is a prime number 
 * @n: number to examine
 * Return: integer value
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return(exact_prime(n, n - 1));
}

/**
 * exact_prime - check if number is prime
 * @n: number to examine
 * @i: iterator
 * Return: 1 for prime or 0 composite
 */

int exact_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (exact_prime(n, i - 1));
}
