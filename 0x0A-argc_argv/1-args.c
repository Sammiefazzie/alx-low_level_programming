#include <stdio.h>

/**
 * main - Print the arguments passed
 * @argv: arguments
 * @argc: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
