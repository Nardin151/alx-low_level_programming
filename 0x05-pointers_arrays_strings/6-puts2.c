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
int len = 0;
for (counter = 0 ; str[counter] != '\0' ; counter+2)
{
_putchar(str[counter]);
}
_putchar('\n');
}
