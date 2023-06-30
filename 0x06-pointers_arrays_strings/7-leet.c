#include "main.h"

/**
 * leet -  Encodes a string to 1337
 * @c: String
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	char key[] = {'a', 'e', 'o', 't', 'l'};
	char val[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == key[j])
			{
				c[i] = val[j];
			}
		}
	}
	return (c);
}
