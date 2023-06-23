#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: a function that prints numbers, followed by a new line.
 * @n: the number of integers passed to the function
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (separator == NULL)
printf("%d", va_arg(ap, int));
else
{
if (i != n - 1)
printf("%d%s", va_arg(ap, int), separator);
else
printf("%d", va_arg(ap, int));
}
}
printf("\n");
va_end(ap);
}
