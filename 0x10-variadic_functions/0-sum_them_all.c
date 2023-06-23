#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: Size of the passed arguemnts
 * Return: the sum of all the passed arguemnts
 **/
int sum_them_all(const unsigned int n, ...)
{

va_list ap;
unsigned int param, sum = 0;
va_start(ap, n);
for (param = 0; param < n; param++)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
