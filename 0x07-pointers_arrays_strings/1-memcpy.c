#include <stdio.h>
#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer that we will copy to
 * @src: pointer that we will copy from
 * @n: the number of bytes that we will copy
 * Return: a pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter;
int size = 0;
for (counter = 0 ; dest[counter] != '\0' ; counter++)
size++;
for (counter = 0 ; counter < n ; counter++)
{
dest[size -1] = src[counter];
size++;
}
return (dest);
}
