#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: string of char that we will copy to
 * @n: the number of chars to copy
 * @src: string of char that we will copy from
 * Return: dest after copying
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter;
for (counter = 0 ; counter < n ; counter++)
dest[counter] = src[counter];
return (dest);
}
