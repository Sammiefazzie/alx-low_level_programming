#include "main.h"
/**
 * print_most_numbers - Print numbers since 0 up to 9
 * descripion: print numbers excluding 2 and 4
 * Return: Numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 0; i++)
	{
	if (i == 2 || i ==4)
	{
	continue;
	}
	else
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}
