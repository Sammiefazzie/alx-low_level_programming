#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicating a newly space in memory
 * @str: input char
 * Return: zero
 */
char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *newMemo;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}
	newMemo = malloc(sizeof(char) * (b + 1));

	if (newMemo == NULL)
		return (NULL);
	while (a < b)
	{
		newMemo[a] = str[a];
		a++;
	}
	newMemo[a] = '\0';
	return (newMemo);
}
