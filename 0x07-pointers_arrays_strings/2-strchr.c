#include <stdio.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string of chars
 * @c: char we want to find the first occurrence of
 * Return: a pointer to the first occurrence of the character c in the string
 * s, or NULL if the character is not found
 **/
char *_strchr(char *s, char c)
{
int counter;
char *ptr;
for (counter = 0 ; s[counter] != '\0' ; counter++)
{
if (s[counter] == c)
{
ptr = s[counter];
break;
}
}
return (ptr);
}
