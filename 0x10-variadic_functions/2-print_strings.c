#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
char *string;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
string = va_arg(ptr, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (i != n - 1)
{
if (separator != NULL)
printf("%s", separator);
}
}
va_end(ptr);
printf("\n");
}

