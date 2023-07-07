#include <stdio.h>
#include "main.h"

/**
 * main - print the name of a program
 * @argc: arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
