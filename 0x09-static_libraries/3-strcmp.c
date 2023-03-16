#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *  _strcmp - Function which compare two strings and
 *  s1: string no 1
 *  s2: string no 2
 *  Return: 0 if they are = , -ve if s1 > s2 , +ve if s1 > s2
 **/
int _strcmp(char *s1, char *s2)
{
int count1;
int count2;
int counter  = 0;
for (counter = 0 ; s1[counter] ; counter++)
count1 += (int)s1[counter];
for (counter = 0 ; s2[counter] ; counter++)
count2 += (int)s2[counter];
if (count1 == count2)
return (0);
else if (count1 > count2)
return (count1 - count2);
else
(count1 - count2);
}
