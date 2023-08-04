#include "main.h"

/**
 * flip_bits - counts the number of bit
 * @n: first number
 * @m: second number
 *
 * Return: number of changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 30; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			num++;
	}
	return (num);
}
