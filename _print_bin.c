#include "main.h"

/**
 * _print_bin - prints binary number
 * @b: argument
 * Return: number of characters printed
 */
int _print_bin(va_list b)
{
    unsigned int n = va_arg(b, unsigned int);

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    unsigned int number = n;
    unsigned int counter = 0;

    // Count the number of bits needed to represent the binary number
    while (number > 0)
    {
        number /= 2;
        counter++;
    }

    // Print the binary representation
    unsigned int j = 1;
    int c = 0;

    while (counter > 0)
    {
        unsigned int l = n / j;
        _putchar(l + '0');
        c++;
        n -= l * j;
        j /= 2;
        counter--;
    }

    return c;
}
