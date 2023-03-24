#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: string of chars to print
 * @f: pointer to the function that would be executed
 * Return: void pointer
 **/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
