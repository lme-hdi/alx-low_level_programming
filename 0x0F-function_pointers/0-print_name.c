#include "function_pointers.h"


/**
 * print_name - the function that prints a name.
 * @name: the name given.
 * @f: the pointer to the printing function.
 *
 * Rteurn: void.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
