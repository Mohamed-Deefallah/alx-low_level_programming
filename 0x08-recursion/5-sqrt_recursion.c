#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - the function returns the natural square root of a number
 * @n: the number will be calculated the square root
 * Return: the resulting of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - the function recurses to find the natural
 * square root of a number
 * @n: the number to calculate the sqaure root
 * @i: the iterator
 * Return: the resulting of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
