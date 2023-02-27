#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string
 **/
void _puts(char *str)
{
int counter;
for (counter = 0 ; str[counter] != '\0' ; counter++)
{
_putchar(str[counter]);
counter++;
}
}
