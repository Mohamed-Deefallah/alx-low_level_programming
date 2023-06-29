#include "main.h"

/**
 * string_toupper - the function will
 * changes all lowercase letters of a string
 * to uppercase
 * @s: the string will be  modified
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
