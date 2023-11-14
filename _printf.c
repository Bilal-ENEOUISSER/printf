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
    do
    {
        number /= 2;
        counter++;
    } while (number > 0);

    // Print the binary representation
    unsigned int j = 1;
    int c = 0;

    do
    {
        unsigned int l = n / j;
        _putchar(l + '0');
        c++;
        n -= l * j;
        j /= 2;
        counter--;
    } while (counter > 0);

    return c;
}
