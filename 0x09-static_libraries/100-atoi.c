#include <stdio.h>
#include "main.h"
/**
 * _atoi - changes a string to an int
 * @s: string of chars
 * Return: int
 **/
int _atoi(char *s)
{
int counter;
int size = 0;
int number = 1;
int tens = 1;
int found_num;
int count;
for (counter = 0 ; s[counter] ; counter++)
size++;
for (counter = size - 1 ; counter >= 0 ; counter--)
{
found_num = (int)s[counter] - 48;
number += tens * found_num;
tens *= 10;
}
return (number - 1);
}
