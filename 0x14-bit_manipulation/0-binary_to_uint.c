#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0
 **/
unsigned int binary_to_uint(const char *b)
{
int counter;
int powerOfTwo = 1;
unsigned int Decimal = 0;
if (b == NULL)
return (Decimal);
for (counter = 0 ; b[counter] != '\0' ; counter++)
{
powerOfTwo *= 2;
if ((b[counter] != '1') & (b[counter] != '0'))
return (Decimal);
}
if (powerOfTwo == 1)
return (0);
powerOfTwo /= 2;
for (counter = 0 ; b[counter] != '\0' ; counter++)
{
if (b[counter] == '1')
Decimal += (powerOfTwo * 1);
else
Decimal += (powerOfTwo * 0);
powerOfTwo /= 2;
}
return (Decimal);
}
