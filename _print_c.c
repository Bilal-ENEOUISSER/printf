#include "main.h"
/**
 * _print_c - function that prints a character
 * @argument: the variadic argument from the printf function
 * Return: amount of characters printed (one).
 **/
int _print_c(va_list argument)
{
char c = (char) va_arg(argument, int);
_putchar(c);
return (1);
}
