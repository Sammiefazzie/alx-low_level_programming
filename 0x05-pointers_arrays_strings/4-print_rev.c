#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: string to reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	for (d -= 0; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
