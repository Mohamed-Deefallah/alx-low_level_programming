#include "main.h"
/**
 * print_numbers - the main function to print the numbers
 * Return: success when be zero
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
