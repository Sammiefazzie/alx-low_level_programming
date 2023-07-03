#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: input string
 * @c: input
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
