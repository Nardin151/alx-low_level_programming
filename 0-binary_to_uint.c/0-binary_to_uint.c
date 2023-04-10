#include <stdio.h>
#include "main.h"
#include <stdlib.h>
unsigned int binary_to_uint(const char *b)
{
int counter;
int powerOfTwo = 1;
unsigned int Decimal = 0;
for (counter = 0 ; b[counter] != '\0' ; counter++)
{
powerOfTwo *= 2;
if ((b[counter] != '1') & (b[counter] != '0') || (b == NULL))
return (0);
}
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
