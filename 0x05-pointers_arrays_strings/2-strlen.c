#include <stdio.h>
#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @s: character
 * Return: n = size of the string
 **/
int _strlen(char *s)
{
int counter;
int count = 0;
for (counter = 0; s[counter] != '\0'; counter++)
{
count++;
}
return (count);
}
