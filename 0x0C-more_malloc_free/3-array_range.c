#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *o, i = 0;

	if (min > max)
		return (NULL);

	o = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (o == NULL)
		return (NULL);

	while (min <= max)
	{
		o[i] = min;
		i++;
		min++;
	}

	return (o);
}
