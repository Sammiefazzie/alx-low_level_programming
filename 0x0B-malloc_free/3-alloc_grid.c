#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Printing a grid of integers
 * @width: input width
 * @height: height input
 * Return: pointer in dimensional arrays
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{

			for (; i >= 0; i--)
				free(p[i]);

			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			p[i][n] = 0;
	}
	return (p);
}
