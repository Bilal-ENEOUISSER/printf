#include "main.h"

/**
 * print_uns - prints an unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_uns(va_list args)
{
unsigned int originalNumber = va_arg(args, unsigned int);
int remainingNum, lastDigit = originalNumber % 10, currentDigit, magnitude = 1;
int  numCharacters = 1;
remainingNum = originalNumber / 10;
if (lastDigit < 0)
{
_putchar('-');
remainingNum = -remainingNum;
originalNumber = -originalNumber;
lastDigit = -lastDigit;
numCharacters++;
}
if (remainingNum > 0)
{
while (remainingNum / 10 != 0)
{
magnitude = magnitude * 10;
remainingNum = remainingNum / 10;
}
remainingNum = originalNumber;
while (magnitude > 0)
{
currentDigit = remainingNum / magnitude;
_putchar(currentDigit + '0');
remainingNum = remainingNum - (currentDigit * magnitude);
magnitude = magnitude / 10;
numCharacters++;
}
}
_putchar(lastDigit + '0');
return numCharacters;
}
