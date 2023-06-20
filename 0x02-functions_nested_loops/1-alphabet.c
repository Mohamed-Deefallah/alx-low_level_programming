#include "main.h"
/**
 * main -use to print th alphabet, in lowercase
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
