#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: charachter to be tested
 * Return: 1 wether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
