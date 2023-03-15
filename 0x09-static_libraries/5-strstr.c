#include <stdio.h>
#include "main.h"
/**
 * _strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * @haystack: the str that we will look in
 * @needle: str that we will look for
 * Return: pointer to the beginning of the str
 **/
char *_strstr(char *haystack, char *needle)
{
int counter;
int start = 0;
int size = 0;
for (counter = 0 ; needle[counter] != '\0' ; counter++)
size++;
for (counter = 0 ; haystack[counter] != '\0' ; counter++)
{
while (haystack[counter] == needle[start])
{
if (haystack[counter] == needle[start])
start++;
else
break;
}
if (start == size)
{
return (counter - start);
break;
}
else
start = 0;
}
}
