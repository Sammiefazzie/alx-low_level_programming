#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer swap
 * @b: second integer swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
