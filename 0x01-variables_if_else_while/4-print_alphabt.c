#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char y;

	y = 'a';
	while
		(y <= 'z') {
			if ((y != 'q' && y != 'e') && y <= 'z')
				putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
