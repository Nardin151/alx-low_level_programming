#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes.
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * Works identically to the standard library function `strncpy`.strncpy.c
 * @dest: stroing the str copy
 * @src: the source
 * @n: max no of bytes
 * Return: char
 **/
char *_strncpy(char *dest, char *src, int n)
{
int counter;
int size = 0;
int inc = 0;
for (counter = 0 ; src[counter] ; counter++)
inc++;
if (n > inc)
n = inc;
for (counter = 0 ; dest[counter] ; counter++)
size++;
for (counter = 0 ; counter < n ; counter++)
dest[counter + size] = src[counter];
return (dest);
}
