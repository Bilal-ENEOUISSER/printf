#include "main.h"

/**
 * print_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int print_oct(va_list val)
{
int i;
int *octalDigitsArray;
int counter = 0;
unsigned int number = va_arg(val, unsigned int);
unsigned int temp = number;
while (number / 8 != 0)
{
number /= 8;
counter++;
}
counter++;
octalDigitsArray = malloc(counter * sizeof(int));
for (i = 0; i < counter; i++)
{
octalDigitsArray[i] = temp % 8;
temp /= 8;
}
for (i = counter - 1; i >= 0; i--)
{
_putchar(octalDigitsArray[i] + '0');
}
free(octalDigitsArray);
return counter;
}
