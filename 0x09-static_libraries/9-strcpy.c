#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int o = 0;
	int x = 0;

	while (*(src + o) != '\0')
	{
		o++;
	}
	for ( ; x < o ; x++)
	{
		dest[x] = src[x];
	}
	dest[o] = '\0';
	return (dest);
}
