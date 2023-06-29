#include "main.h"
/**
 * _strncat - this function build to concatenates n types from string to
 * another.
 * @dest: the distenation of string
 * @src: the source of string
 * @n: no. of bytes for string and concat.
 * Return: success when result dest
 * */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
