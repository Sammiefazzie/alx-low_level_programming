#include <stdio.h>

/**
 * main - print receiving arguments
 * @argc: arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s;
	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
