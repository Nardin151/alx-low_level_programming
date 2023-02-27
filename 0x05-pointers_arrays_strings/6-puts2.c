#include <stdio.h>
#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str : string
 **/
void puts2(char *str)
{
int counter;
for (counter = 0 ; str[counter] != '\0' ; counter++)
{
_putchar(str[counter]);
counter++;
}
_putchar('\n');
}
