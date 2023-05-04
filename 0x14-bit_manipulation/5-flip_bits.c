#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, result;
	unsigned int i, j;

	j = 0;
	result = 1;
	dif = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (dif & result))
			j++;
		result <<= 1;
	}

	return (j);
}
