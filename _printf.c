#include "main.h"

/**
 * _printf - printf input and specifiers
 * @format: input
 *
 * Return: k or error
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, k = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i = i + 1;
				k++;
			}
			else if (handle_print(format, i + 1) != NULL)
			{
				k += handle_print(format, i + 1)(args);
				i = i + 1;
			}
			else
			{
				_putchar(format[i]);
				k++;
			}
		}
		else
		{
			_putchar(format[i]);
			k++;
		}
	}
	va_end(args);
	return (k);
}
