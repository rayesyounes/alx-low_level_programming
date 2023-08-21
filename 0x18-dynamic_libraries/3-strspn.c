#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int nb;

	while (*s)
	{
		for (nb = 0; accept[nb]; nb++)
		{
			if (*s == accept[nb])
			{
				byt++;
				break;
			}

			else if (accept[nb + 1] == '\0')
				return (byt);
		}

		s++;
	}

	return (byt);
}
