#include "main.h"

/**
 * factorial - the function returns the factorial of the  number
 * @n: number will be return the factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
