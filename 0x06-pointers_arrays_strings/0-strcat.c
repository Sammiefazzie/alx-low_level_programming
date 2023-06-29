#include "main.h"
/**
 * *_strcat - Function that concatenates two strings
 * @dest: First string to append
 * @src: second string to appen
 * @n: The number of bytes from string src to string dest
 * Return: Pointer result to string dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, destNum = 0;

	while (dest[index++])
	{
	destNum++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
	dest[destNum++] = src[index];
	}
	return (dest);
}
