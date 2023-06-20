#include "main.h"
/**
 * print_alphabet -print lowercas alphabet
 * Return : sucsess when return zero
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
