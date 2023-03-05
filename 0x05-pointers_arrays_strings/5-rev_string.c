#include <stdio.h>
#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: a string
 **/
void rev_string(char *s)
{
int len = 0;
int counter;
char temp;
for (counter = 0 ; s[counter] != '\0' ; counter++)
len++;
for (counter = 0 ; counter <= (len / 2) ; counter++)
{
temp = s[counter];
s[counter] = s[len - counter - 1];
s[len - counter - 1] = temp;
}
}
