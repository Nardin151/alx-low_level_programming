#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: pointer that we will copy a str to
 * @src: pointer that we will from
 * Return: pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
int counter;
for (counter = 0 ; src[counter] != '\0' ; counter++)
dest[counter] = src[counter];
dest[counter + 1] = '\0';
return (dest);
}
