#include "main.h"

/**
 * reverse_array - Reverse array of integers
 * @a: array of integers to be reversed
 * @n: number element of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
