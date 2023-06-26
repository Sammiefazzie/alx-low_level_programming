#include "main.h"
/**
 * rev_string - function to revese a string
 * @s: input string
 * Retun: string in reverse
 */

void rev_string(char *s)
{
	int counter = 0, index = 0;
	char bdb;

	while (s[index++])
	counter++;

	for (index = counter - 1; index >= counter / 2; index--)
	{
	bdb = s[index];
	s[index] = s[counter - index - 1];
	s[counter - index - 1] = bdb;
	}
}
