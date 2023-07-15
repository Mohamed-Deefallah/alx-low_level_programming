#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the function that allocates
 * memory using malloc.
 * @b:the size of bytes
 * Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
