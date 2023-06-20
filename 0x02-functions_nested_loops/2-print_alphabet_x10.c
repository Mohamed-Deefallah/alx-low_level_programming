#include "main.h"
/**
 * main-print ten times lowercase alphabet
 * alphabet_x10- print ten times
 * Return: sucess equal zero
 */

void print_alphabet_x10(void)
{
	char ch = 'z';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
		_putchar(ch);
		c++;
		}
	}
	_putchar('\n');
	i++;
}
