#include "main.h"

/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int nb;
	unsigned int i;

	nb = 1;
	for (i = 1; i <= pow; i++)
		nb *= base;
	return (nb);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int prg, result;
	char flag;

	flag = 0;
	prg = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (prg != 0)
	{
		result = n & prg;
		if (result == prg)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || prg == 1)
		{
			_putchar('0');
		}
		prg >>= 1;
	}
}
