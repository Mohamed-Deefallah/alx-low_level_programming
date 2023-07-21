#include "function_pointers.h"
/**
 * print_name -the function a function that prints a name
 * @name: the string
 * @f: the pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
