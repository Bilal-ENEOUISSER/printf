#include "main.h"
/**
 * _print_i - print int
 * @args: print argument
 * Return: number1 of characters printed
 */

int _print_i(va_list args)
{
	int num1 = va_arg(args, int);
	int number1, end = num1 % 10, digit, j = 1;
	int  i = 1;

	num1 /= 10;
	number1 = num1;
	if (end < 0)
	{
		_putchar('-');
		number1 = -number1;
		num1 = -num1;
		end = -end;
		i++;
	}
	if (number1 > 0)
	{
		while (number1 / 10 != 0)
		{
			j *= 10;
			number1 /= 10;
		}
		number1 = num1;
		while (j > 0)
		{
			digit = number1 / j;
			_putchar(digit + '0');
			number1 = number1 - (digit * j);
			j /= 10;
			i++;
		}
	}
	_putchar(end + '0');
	return (i);
}
