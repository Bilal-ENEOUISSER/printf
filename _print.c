#include "main.h"
/**
 * _printf - printf input and specifiers
 * @format: input
 *
 * Return: len or error
 */
int _printf(const char *format, ...)
{
va_list val;
unsigned int i, len = 0;
va_start(val, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{   _putchar('%');
i = i + 1;
len++;
}
else if (handle_print(format, i + 1) != NULL)
{   len += handle_print(format, i + 1)(val);
i = i + 1;
}
else
{ _putchar(format[i]);
len++;
}
}
else
{ _putchar(format[i]);
len++;
}
}
va_end(val);
return (len);
}