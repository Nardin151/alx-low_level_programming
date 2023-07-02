#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
va_list ap;
char *id = format;
char *per = malloc(sizeof(char) * 2);
per[0] = '%';
va_start(ap, format);
while (id[0] != '\0')
{
while ((id[0] == 'f') | (id[0] == 'c') | (id[0] == 'i') | (id[0] == 's'))
{
per[1] = id[0];
printf("%s%s",per,va_arg(ap, char *));
}
id++;
}
}
