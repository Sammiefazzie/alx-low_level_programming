#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Print element of each array
 * @array: ..
 * @size: amount of element to print
 * @action: pointer to print
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
