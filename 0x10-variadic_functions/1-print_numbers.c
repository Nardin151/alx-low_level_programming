#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
if (separator == NULL)
separator = "";
va_start(ap, n);
for (i = 0 ; i < n - 1 ; i++)
printf("%d%c ", va_arg(ap, int), separator[0]);
printf("%d\n", va_arg(ap, int));
va_end(ap);
}