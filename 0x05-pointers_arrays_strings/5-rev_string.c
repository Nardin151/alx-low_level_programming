#include <stdio.h>
#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: a string
 **/
void rev_string(char *s)
{
int counter;
int length = 0;
int counter_2;
for (counter = 0 ; s[counter] != '\0' ; counter++)
{
_putchar(s[counter]);
}
_putchar('\n');
for (counter_2 = counter ; counter_2 >= 0 ; counter_2--)
{
_putchar(s[counter_2]);
}
_putchar('\n');
}
