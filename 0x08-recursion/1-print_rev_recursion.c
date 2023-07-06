#include "main.h"
/**
 * _print_rev_recursion - it is a function will print a reverse string
 * followe by a new line
 * @s: it is a string will be print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
