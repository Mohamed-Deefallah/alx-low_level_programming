#include "main.h"

/**
 * get_endianness - the function check endianness
 * Return: if 0 big endian, if 1 little endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
