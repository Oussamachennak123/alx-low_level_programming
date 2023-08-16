#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: the function to callback
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
