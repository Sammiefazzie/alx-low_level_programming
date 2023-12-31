#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - Function to print name using pointer
 * @name: string
 * @f: function from pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
