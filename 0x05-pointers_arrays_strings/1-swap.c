#include "main.h"
/**
 * swap_int - swap two values of 2 integers
 * @a: pointer of value no.1
 * @b: pointer of value no.2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
