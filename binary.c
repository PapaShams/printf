#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @b: number to be printed in binary
 * @printed: hold the number of characters printed
 */
void print_binary(unsigned int b, unsigned int *printed)
{
	if (n > 1)
	{
		*printed += 1;
		print_binary(b >> 1, printed);
	}
	_putchar((b & 1) + '0');
}
