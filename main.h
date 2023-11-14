#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct specifiers - structure
 * @m: the specifier to match after %
 * @func: the function to call
 */

typedef struct specifiers
{
	char *m;
	int (*func)(va_list);
}
hd_p;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_c(va_list argument);
int _print_s(va_list argument);
int (*handle_print(const char *next, int position))(va_list);
int _print_i(va_list val);
int _print_bin(va_list b);

#endif
