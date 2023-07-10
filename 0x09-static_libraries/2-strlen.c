#include "main.h"

/**
 * _strlen - it is convert the length of a string
 * @s: string value
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
