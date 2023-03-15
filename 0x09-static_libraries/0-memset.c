#include <sdtio.h>
#include "main.h"
/**
 * _memset - a function that used to fill a block of memory with certain number of bytes
 * @s: string of chars
 * @n: the number of bytes that we will fill
 * @b: the char that we will fill the memory with
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter;
for (counter = 0 ; counter < n ; counter++)
s[counter] = b;
return (s);
}
