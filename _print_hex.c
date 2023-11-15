#include "main.h"

/**
 * print_hex_extra - prints a hexadecimal number.
 * @decimalNumber: argument.
 * Return: counter.
 */
int print_hex_extra(unsigned long int decimalNumber)
{
long int i;
long int *hexDigitsArray;
long int counter = 0;
unsigned long int temp = decimalNumber;
while (decimalNumber / 16 != 0)
{
decimalNumber /= 16;
counter++;
}
counter++;
hexDigitsArray = malloc(counter * sizeof(long int));
for (i = 0; i < counter; i++)
{
hexDigitsArray[i] = temp % 16;
temp = temp / 16;
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
