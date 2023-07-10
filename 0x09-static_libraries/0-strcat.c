#include "main.h"

/**
 * _strcat - this function use to concatenates two strings
 * @dest: string will be  appended
 * @src: string will be add
 * Return: a pointer to te final result
 */
char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;

	while (dest[n] != '\0')
		n++;

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
