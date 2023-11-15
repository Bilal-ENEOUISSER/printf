#include "main.h"

/**
 * print_hex - prints a hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_hex(va_list val)
{
int i;
int *hexDigitsArray;
int counter = 0;
unsigned int decimalNumber = va_arg(val, unsigned int);
unsigned int temp = decimalNumber;
while (decimalNumber / 16 != 0)
{
decimalNumber /= 16;
counter++;
}
counter++;
hexDigitsArray = malloc(counter * sizeof(int));
for (i = 0; i < counter; i++)
{
hexDigitsArray[i] = temp % 16;
temp /= 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (hexDigitsArray[i] > 9)
hexDigitsArray[i] = hexDigitsArray[i] + 39;
_putchar(hexDigitsArray[i] + '0');
}
free(hexDigitsArray);
return counter;
}
