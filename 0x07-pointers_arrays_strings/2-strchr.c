#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located
 *
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int nb;

	for (nb = 0; s[nb] >= '\0'; nb++)
	{
		if (s[nb] == c)
			return (s + nb);
	}
	return ('\0');
}
