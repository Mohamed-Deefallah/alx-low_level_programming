#include "main.h"
/**
 * more_numbers - it is the function that print numbers 
 * from 1-14 ten times
 * Return: when zero equal success
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i <= 10; i++)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c >= 10)
			_putchar(row / 10 + '0');
		_putchar(row % 10 + '0');
	}
	_putchar('\n');
	}
}
