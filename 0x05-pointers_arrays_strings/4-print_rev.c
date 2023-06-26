#include "main.h"

/**
 * print_rev - printing string type in reverse then add a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i. j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; 2 j>= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
