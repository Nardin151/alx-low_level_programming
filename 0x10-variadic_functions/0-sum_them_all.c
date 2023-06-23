#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: Size of the passed arguemnts
 * Return: the sum of all the passed arguemnts
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
int sum = 0;
if (n == 0)
return (0);
va_start(ptr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
