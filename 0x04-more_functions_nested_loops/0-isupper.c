#include "main.h"

/**
 * _isupper - the main used to print the upper case
 * @c:the character will be checked
 * Return: if 1 so it is the uppercase if 0 other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
