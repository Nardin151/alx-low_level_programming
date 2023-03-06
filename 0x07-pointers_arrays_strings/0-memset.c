#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer
 * @b: char that we will fill in the n bytes
 * @n: the number of bytes that we will fill
 *Return: will return a pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
int counter;
for (counter = 0 ; counter < n ; counter++)
{
*s = b;
s++;
}
return (s);
}
