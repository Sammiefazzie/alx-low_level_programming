#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: Array of intergers
 * @n: Number of elements of array to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
	if (f != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
