#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members in the array
 * @size: size in bytes
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *o;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	o = malloc(l);

	if (o == NULL)
		return (NULL);

	while (i < l)
	{
		o[i] = 0;
		i++;
	}

	return (o);
}
