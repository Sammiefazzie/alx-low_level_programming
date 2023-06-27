#include "main.h"

/**
 * puts2 - print a character of a string,foled by a new line
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int e;
	int f = 0;

	while (str[f] != '\0')
	{
	e++;
	}

	for (e = 0; e < f; e += 2)
	{
	_putchar(str[e]);
	}
	_putchar('\n');
}
