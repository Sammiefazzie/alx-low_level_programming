#include "main.h"
#include <stdlib.h>

/**
 *  read_textfile - Functions that reads a file and print
 *  @filename: texfile
 *  @letters: number of letters
 *  Return: the actual number it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t k;
	ssize_t w;
	ssize_t t;

	k = open(filename, O_RDONLY);
	if (k == -1)
		return (0);
	fp = malloc(sizeof(char) * letters);
	t = read(k, fp, letters);
	w = write(STDOUT_FILENO, fp, t);

	free(fp);
	close(k);
	return (w);
}
