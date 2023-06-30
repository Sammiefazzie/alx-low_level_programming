#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int f = 0;

	while (n[f] != '\0')
	{
		if (n[f] >= 'a' && n[f] <= 'z')
			n[f] -= 32;
		f++;
	}
	return (n);
}
