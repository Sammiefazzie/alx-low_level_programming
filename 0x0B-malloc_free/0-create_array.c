#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array of char to assign another char
 * @size: Of an array
 * @c: specific char to be created
 * Return: Pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ptr[a] = c;
	return (ptr);
}
