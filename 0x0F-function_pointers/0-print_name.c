#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name: the name we want to print
 * @f: pointer to a function
 **/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
