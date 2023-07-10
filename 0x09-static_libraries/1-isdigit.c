#include "main.h"
/**
 * _isdigit - it is to check the input digit or not
 * @c: the character will be checked
 * Return: if 1 it will be digit if 0 will be other
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
