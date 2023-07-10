#include "main.h"

/**
 * _puts - print the str to stdout
 * @str: pointer to string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
