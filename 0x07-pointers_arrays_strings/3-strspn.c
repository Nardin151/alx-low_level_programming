#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: string of chars
 * @accept: string of chars
 * Retrun:the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 **/
unsigned int _strspn(char *s, char *accept)
{
int counter;
unsigned int similar = 0;
int counter2;
for (counter = 0 ; accept[counter] != '\0' ; counter++)
{
for (counter2 = 0 ; s[counter2] != '\0' ; counter2++)
if (accept[counter] == s[counter2])
similar++;
}
return (similar);
}
