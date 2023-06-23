#include "main.h"
/**
 * print_most_numbers - print most number from 0-9 and dont 
 * print 2 and 4
 * Return: when zero meaning success
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
		continue;
	}
		_putchar(c + '0');
	}
	_putchar('\n');
}
