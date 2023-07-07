#include "main.h"

/**
 * _strspn - Entry point
 * @s: first part
 * @accept: accepted bytes
 * Return: number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 1;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				check = 0;
				break;
			}
		}
		if (check == 1)
			break;
	}
	return (i);
}
