#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int nb;
	char *dst = dest;
	char *source = src;

	for (nb = 0; nb < n; nb++)
		dst[nb] = source[nb];

	return (dest);
}
