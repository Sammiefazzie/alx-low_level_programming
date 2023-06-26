#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: string to reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (b -= 0; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
