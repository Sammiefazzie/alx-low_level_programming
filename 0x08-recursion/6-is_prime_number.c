#include "main.h"

int exact_prime(int n, int i);

/**
 * is_prime_number - Return if integer is a prime number 
 * @n: number to examine
 * Return: integer value
 */

int is_prime_number(int n)
{
	return(check_prime(n, 1));
}

/**
 * exact_prime - check if number is prime
 * @n: number to examine
 * @i: the iteration times
 * Return: 1 n is prime, 0 if not
 */

int exact_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (i);

	return (exact_prime(n, i + 1));
}
