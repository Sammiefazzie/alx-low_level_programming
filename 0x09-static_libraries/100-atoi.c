#include "main.h"

/**
 * _atoi - Convert a string to integer
 * @s: String to convert
 * Return: the integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int dis = 0;
	int min = 1;
	int eme = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			eme = 1;
			dis = (dis * 10) + (s[c] - '0');
			c++;
		}
		if (eme == 1)
		{
			break;
		}
		c++;
	}
	dis *= min;
	return (dis);
}
