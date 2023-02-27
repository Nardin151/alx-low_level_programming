#include <stdio.h>
#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: a string
 **/
void rev_string(char *s)
{
int counter;
int counter_2;
int i = 0;
char temp;
for (counter = 0; s[counter] != '\0' ; counter++)
for (counter_2 = counter ; (counter_2 / 2) >= 0 ; counter_2--)
{
temp = s[i];
s[i] = s[counter_2];
s[counter_2] = temp;
i++;
}
_putchar('\n');
}
