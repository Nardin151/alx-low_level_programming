#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * Return: a copy of a string in the dest string
 * @dest: string that we will copy to
 * @src: string that we will copy from
 * @n: the number of char that we will copy
 **/
char *_strncpy(char *dest, char *src, int n)
{
int counter;
int sizeof_s1 = 0;
int sizeof_s2 = 0;
for (counter = 0 ; dest[counter] != '\0' ; counter++)
sizeof_s1++;
for (counter = 0 ; src[counter] != '\0' ; counter++)
sizeof_s2++;
if (n > sizeof_s1)
{
if (n > sizeof_s2)
n = sizeof_s2;
else
n = sizeof_s1;
}
for (counter = 0 ; counter < n ; counter++)
dest[counter] = src[counter];
return (dest);
}
