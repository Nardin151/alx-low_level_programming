#include <stdio.h>
#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 * @s : string
 **/
void print_rev(char *s)
{
int counter;
int length = 0;
int counter_2;
for (counter = 0 ; s[counter] != '\0' ; counter++)
{
length++;
}
for (counter_2 = lenght-1 ;lenght != 0; counter--)
{
_putchar(s[counter_2]);
}
_putchar('\n');
}
