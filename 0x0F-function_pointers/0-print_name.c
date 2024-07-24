#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: The name to be printed
 * @f: A function pointer
 *
 * Description: Functions takes name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
