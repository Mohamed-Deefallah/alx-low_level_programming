#include "main.h"
/**
 * main-print ten times lowercase alphabet
 * function print_alphabet_x10 -print ten times
 * Return: sucess equal zero
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}