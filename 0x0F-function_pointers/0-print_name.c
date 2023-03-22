#include "function_pointers.h"
/**
 * @name: string of chars to print
 * @f: pointer to the function that would be executed
 * Return: void pointer
 **/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
