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
int count = 0;
for (counter = 0; s[counter] != '\0' ; counter++)
count++;
char temp[count];
for (counter = 0; s[counter] != '\0' ; counter++)
{
temp[counter] = s[counter];
}
for (counter_2 = counter ; (counter_2 / 2) >= 0 ; counter_2--)
{
s[i]=temp[counter_2];
i++;
}
_putchar('\n');
}
