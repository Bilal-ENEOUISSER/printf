#include "main.h"
/**
 * _print_bin - prints binary number
 * @b: argument
 * Return: 0
 */
int _print_bin(va_list b)
{
	unsigned int cont, j, i, l, n, number1;
	int c = 0;

	n = va_arg(b, unsigned int);

	if (n)
	{
		number1 = n;
		cont = 0;
		while (number1)
		{
			number1 /= 2;
			cont++;
		}
		j = 1;
		for (i = 1; i <= cont - 1; i++)
			j *= 2;
		for (i = 1; i <= cont; i++)
		{
			l = n / j;
			_putchar(l + '0');
			c++;
			n -= l * j;
			j /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}
