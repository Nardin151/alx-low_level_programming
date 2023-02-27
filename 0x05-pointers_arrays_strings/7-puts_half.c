#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: string
 **/
void puts_half(char *str)
{
int counter;
int counter_2;
int inc = 0;
for (counter = 0 ; str[counter] != '\0' ; counter++)
inc++;
if (inc % 2 != 0)
inc = (inc - 1) / 2 + 1;
else
inc = inc / 2;
for (counter_2 = inc ; counter_2 <= counter - 1 ; counter_2++)
_putchar(str[counter_2]);
_putchar('\n');
}
