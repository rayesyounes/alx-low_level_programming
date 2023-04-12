#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2 dimensional array of integers
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return: pointer to the newly allocated 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **ar;

	if (width == 0 || height == 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(width * sizeof(int));
		if (ar[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
				free(ar[a]);

			free(ar);
			return (NULL);
		}
	}

	for (i = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ar[a][b] = 0;
	}

	return (ar);
}
