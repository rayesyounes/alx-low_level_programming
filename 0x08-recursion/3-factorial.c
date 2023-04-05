#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int a;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
