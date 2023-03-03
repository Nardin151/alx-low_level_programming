#include <stdio.h>
#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @x: string of char
 * Return: string of chars encoded into 1337
 **/
char *leet(char *x)
{
int count;
char Alpha[5] = {'A','E','O','T','L'};
int leet_code[5] = {4,3,0,7,1};
int count2;
for (count = 0 ; x[count] != '\0' ; count++)
{
for (count2 = 0 ; count2 < 5 ; count2++)
if ((x[count] == Alpha[count2]) || ((char) (x[count] - 32) == Alpha[count2]))
x[count] = (char) leet_code[count2] + 48;
}
return (x); 
}
