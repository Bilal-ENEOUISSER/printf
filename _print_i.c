#include "main.h"
/**
 * _print_i - print int
 * @args: print argument
 * Return: number of characters printed
 */

int _print_i(va_list args)
{
	int num = va_arg(args, int);
	int number, end = num % 10, digit, j = 1;
	int  i = 1;
	
	num /= 10;
	number = num;
	if (end < 0)
	{
		_putchar('-');
		number = -number;
		num = -num;
		end = -end;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			j *= 10;
			number /= 10;
		}
		number = num;
		while (j > 0)
		{
			digit = number / j;
			_putchar(digit + '0');
			number = number - (digit *j);
			j /= 10;
			i++;
		}
	}
	_putchar(end + '0');
	return (i);
}
