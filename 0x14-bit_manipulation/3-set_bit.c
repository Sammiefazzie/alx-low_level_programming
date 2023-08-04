#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: ...
 * Return: 1 if it works and -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 30)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
