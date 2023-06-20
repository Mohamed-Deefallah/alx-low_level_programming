#include "main.h"

/**
 * print_sign - print sign num.
 * @n: the i-nt for checking
 * Return: 1 to  print + if n greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n  less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
