#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print
 * @name: the name
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
