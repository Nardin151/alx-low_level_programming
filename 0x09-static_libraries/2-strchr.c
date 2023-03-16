#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strchr - Returns a pointer to the first occurrence
 * @s: string of chars
 * @c: the char we are looking for
 * Return: _strchr - Returns a pointer to the first occurrence
 **/
char *_strchr(char *s, char c)
{
int counter = 0;
char *ptr;
for (counter = 0 ; s[counter] != '\0' ; counter++)
{
if (s[counter] ==  c)
{
ptr = &s[counter];
break;
}
}
return (ptr);
}
