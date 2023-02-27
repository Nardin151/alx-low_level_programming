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
int counter_2;
int len = 0;
for (counter_2 = 0; str[counter_2] != '\0' ; counter_2++)
len++;
for (counter = 0 ; counter >= len ; counter++)
{
_putchar(str[counter]);
counter++;
}
_putchar('\n');
}
