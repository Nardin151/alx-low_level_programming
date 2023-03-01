#include <stdio.h>
#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * Return: concatenated string
 * @dest: the string that we will append to
 * @src: the string that we will append from
 * @n: the number of char that we will append
 **/
char *_strncat(char *dest, char *src, int n)
{
int counter;
int sizeof_s1 = 0;
int sizeof_s2 = 0;
for (counter = 0 ; dest[counter] != '\0' ; counter++)
sizeof_s1++;
for (counter = 0; src[counter] != '\0' ; counter++)
sizeof_s2++;
if (n > sizeof_s2)
n = sizeof_s2;
for (counter = 0 ; counter <= n - 1 ; counter++)
{
dest[sizeof_s1] = src[counter];
sizeof_s1++;
}
return (dest);
}
