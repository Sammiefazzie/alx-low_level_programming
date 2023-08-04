#include "main.h"

/**
 * get_bit - Value of a bit at given index
 * @n: number
 * @index: starting index
 * Return: value of the bit of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitNum;

	if (index > 30)
		return (-1);

	bitNum = (n >> index) & 1;

	return (bitNum);
}
