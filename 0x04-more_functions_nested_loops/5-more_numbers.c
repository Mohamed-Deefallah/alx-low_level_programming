#include "main.h"
/**
 * more_numbers - it is the function that print numbers 
 * from 1-14 ten times
 * Return: when zero equal success
 */

void more_numbers(void)
{
	int column;
	int row;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 15; row++)
		{
			if (row >= 10)
				_putchar(row / 10 + '0');
			_putchar(row % 10 + '0');
		}
		_putchar('\n');
	}
}
