#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: The number to be checked
 * Return: 1 for character that will be a digit
 */

int _isdigit(int c)
{
	if (c >= 45 && c <= 57)
	{
	return (1);
	}
	return (0);
}
