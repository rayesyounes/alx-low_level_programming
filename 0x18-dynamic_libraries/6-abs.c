#include "main.h"

/**
 *  _abs - function that computes the absolute value of an integer.
 *
 *  @a: parameter to be checked
 *
 *  Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
